#pragma once

// BAD EXAMPLE CODE - DO NOT USE!

#define SENDER_PORT PORTB
#define SENDER_DIR DDRB
#define SENDER_DATA (0b00100000u)
#define SENDER_CLOCK (0b00010000u)

class Sender
{
public:
  void begin() {
    SENDER_DIR |= (SENDER_DATA|SENDER_CLOCK);
    SENDER_PORT &= ~(SENDER_DATA|SENDER_CLOCK);
  }

  void sendByte(uint8_t data) {
    for (uint8_t i = 0; i < 8; ++i) {
      sendBit((data & 0b1u) != 0);
      data >>= 1;
    }
  }

private:
  void sendBit(bool oneBit) {
    if (oneBit) {
      SENDER_PORT |= SENDER_DATA;
    } else {
      SENDER_PORT &= ~SENDER_DATA;      
    }
    SENDER_PORT |= SENDER_CLOCK;      
    SENDER_PORT &= ~SENDER_CLOCK;      
  }
};
