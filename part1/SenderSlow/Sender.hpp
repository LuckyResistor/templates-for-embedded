#pragma once

class Sender
{
public:
  Sender(uint8_t clockPin = 12, uint8_t dataPin = 13)
    : _clockPin(clockPin), _dataPin(dataPin) {
  }

  void begin() {
    pinMode(_clockPin, OUTPUT);
    pinMode(_dataPin, OUTPUT);
    digitalWrite(_clockPin, LOW);
    digitalWrite(_dataPin, LOW);
  }

  void sendByte(uint8_t data) {
    sendBit((data & (0b1u<<0)) != 0);
    sendBit((data & (0b1u<<1)) != 0);
    sendBit((data & (0b1u<<2)) != 0);
    sendBit((data & (0b1u<<3)) != 0);
    sendBit((data & (0b1u<<4)) != 0);
    sendBit((data & (0b1u<<5)) != 0);
    sendBit((data & (0b1u<<6)) != 0);
    sendBit((data & (0b1u<<7)) != 0);
  }

private:
  void sendBit(bool oneBit) {
    digitalWrite(_dataPin, (oneBit ? HIGH : LOW));
    digitalWrite(_clockPin, HIGH);
    digitalWrite(_clockPin, LOW);
  }

private:
  uint8_t _clockPin;
  uint8_t _dataPin;
};
