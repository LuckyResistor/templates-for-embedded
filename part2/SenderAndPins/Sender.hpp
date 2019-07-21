#pragma once

template<typename DataPin, typename ClockPin>
class Sender
{
public:
  void initialize() {
      DataPin::configureAsOutput();
      ClockPin::configureAsOutput();
  }

  void sendBit(bool oneBit) {
    if (oneBit) {
      DataPin::setHigh();
    } else {
      DataPin::setLow();
    }
    ClockPin::setHigh();
    ClockPin::setLow();
  }

  void sendByte(uint8_t data) {
    for (uint8_t i = 0; i < 8; ++i) {
      sendBit((data & 0b1u) != 0);
      data >>= 1;
    }
  }
};
