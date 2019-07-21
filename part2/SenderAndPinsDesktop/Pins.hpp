#pragma once

// Do not use - only for demo purposes

#include "Pin.hpp"

#include <Arduino.h>

template<uint8_t ioPortAddr, uint8_t ioDirAddr, uint8_t mask>
class PinT : public Pin
{  
public:
  void configureAsInput() override {
    _SFR_IO8(ioDirAddr) &= ~mask;    
  }
  
  void configureAsOutput() override {
    _SFR_IO8(ioDirAddr) |= mask;
  }

  bool getInput() override {
    return ((_SFR_IO8(ioPortAddr) & mask) != 0);
  }

  void setHigh() override {
    _SFR_IO8(ioPortAddr) |= mask;
  }

  void setLow() override {
    _SFR_IO8(ioPortAddr) &= ~mask;
  }
};

using Pin0  = PinT<_SFR_IO_ADDR(PORTD), _SFR_IO_ADDR(DDRD), 0b00000001u>;
using Pin1  = PinT<_SFR_IO_ADDR(PORTD), _SFR_IO_ADDR(DDRD), 0b00000010u>;
using Pin2  = PinT<_SFR_IO_ADDR(PORTD), _SFR_IO_ADDR(DDRD), 0b00000100u>;
using Pin3  = PinT<_SFR_IO_ADDR(PORTD), _SFR_IO_ADDR(DDRD), 0b00001000u>;
using Pin4  = PinT<_SFR_IO_ADDR(PORTD), _SFR_IO_ADDR(DDRD), 0b00010000u>;
using Pin5  = PinT<_SFR_IO_ADDR(PORTD), _SFR_IO_ADDR(DDRD), 0b00100000u>;
using Pin6  = PinT<_SFR_IO_ADDR(PORTD), _SFR_IO_ADDR(DDRD), 0b01000000u>;
using Pin7  = PinT<_SFR_IO_ADDR(PORTD), _SFR_IO_ADDR(DDRD), 0b10000000u>;
using Pin8  = PinT<_SFR_IO_ADDR(PORTB), _SFR_IO_ADDR(DDRB), 0b00000001u>;
using Pin9  = PinT<_SFR_IO_ADDR(PORTB), _SFR_IO_ADDR(DDRB), 0b00000010u>;
using Pin10 = PinT<_SFR_IO_ADDR(PORTB), _SFR_IO_ADDR(DDRB), 0b00000100u>;
using Pin11 = PinT<_SFR_IO_ADDR(PORTB), _SFR_IO_ADDR(DDRB), 0b00001000u>;
using Pin12 = PinT<_SFR_IO_ADDR(PORTB), _SFR_IO_ADDR(DDRB), 0b00010000u>;
using Pin13 = PinT<_SFR_IO_ADDR(PORTB), _SFR_IO_ADDR(DDRB), 0b00100000u>;
