#pragma once

// Do not use - only for demo purposes

template<typename DataPin, typename ClockPin>
class Sender
{
public:
  DataPin _data;
  ClockPin _clock;
  
public:
  void initialize() {
      _data.configureAsOutput();
      _clock.configureAsOutput();
  }

  void sendBit(bool oneBit) {
    if (oneBit) {
      _data.setHigh();
    } else {
      _data.setLow();
    }
    _clock.setHigh();
    _clock.setLow();
  }

  void sendByte(uint8_t data) {
    for (uint8_t i = 0; i < 8; ++i) {
      sendBit((data & 0b1u) != 0);
      data >>= 1;
    }
  }
};
