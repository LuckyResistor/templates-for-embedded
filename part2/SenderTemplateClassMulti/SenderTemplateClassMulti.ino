#include "Sender.hpp"

Sender<_SFR_IO_ADDR(PORTB), _SFR_IO_ADDR(DDRB), 0b00100000u, 0b00010000u> gSenderA;
Sender<_SFR_IO_ADDR(PORTB), _SFR_IO_ADDR(DDRB), 0b00001000u, 0b00000100u> gSenderB;
Sender<_SFR_IO_ADDR(PORTB), _SFR_IO_ADDR(DDRB), 0b00000010u, 0b00000001u> gSenderC;

const uint8_t cDataSize = 16;
const char cDataA[cDataSize] = "Hello World!   ";
const char cDataB[cDataSize] = "Templates for  ";
const char cDataC[cDataSize] = "flexible code. ";

void setup() {
  gSenderA.initialize();
  gSenderB.initialize();
  gSenderC.initialize();
}

void loop() {
  for (uint8_t i = 0; i < cDataSize-1; ++i ) {
    gSenderA.sendByte(cDataA[i]);
    gSenderB.sendByte(cDataB[i]);
    gSenderC.sendByte(cDataC[i]);
  }
}
