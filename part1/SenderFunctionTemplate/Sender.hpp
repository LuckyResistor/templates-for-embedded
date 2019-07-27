#pragma once

// Intermediate Example -> This will get better, do not use!

namespace Sender {

template<uint8_t ioPortAddr, uint8_t ioDirAddr, uint8_t dataMask, uint8_t clockMask>
void initialize() {
    _SFR_IO8(ioDirAddr) |= (dataMask|clockMask);
    _SFR_IO8(ioPortAddr) &= ~(dataMask|clockMask);  
}

template<uint8_t ioPortAddr, uint8_t dataMask, uint8_t clockMask>
void sendBit(bool oneBit) {
  if (oneBit) {
    _SFR_IO8(ioPortAddr) |= dataMask;
  } else {
    _SFR_IO8(ioPortAddr) &= ~dataMask;      
  }
  _SFR_IO8(ioPortAddr) |= clockMask;
  _SFR_IO8(ioPortAddr) &= ~clockMask;
}

template<uint8_t ioPortAddr, uint8_t dataMask, uint8_t clockMask>
void sendByte(uint8_t data) {
  for (uint8_t i = 0; i < 8; ++i) {
    sendBit<ioPortAddr, dataMask, clockMask>((data & 0b1u) != 0);
    data >>= 1;
  }
}
  
}
