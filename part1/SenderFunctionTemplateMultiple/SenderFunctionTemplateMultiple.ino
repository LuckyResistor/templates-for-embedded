#include "Sender.hpp"

const uint8_t cSpiPortAddr = _SFR_IO_ADDR(PORTB);
const uint8_t cSpiDirAddr = _SFR_IO_ADDR(DDRB);
const uint8_t cSpiDataMaskA = 0b00100000u;
const uint8_t cSpiClockMaskA = 0b00010000u;
const uint8_t cSpiDataMaskB = 0b00001000u;
const uint8_t cSpiClockMaskB = 0b00000100u;
const uint8_t cSpiDataMaskC = 0b00000010u;
const uint8_t cSpiClockMaskC = 0b00000001u;

const uint8_t cDataSize = 16;
const char cDataA[cDataSize] = "Hello World!   ";
const char cDataB[cDataSize] = "Templates for  ";
const char cDataC[cDataSize] = "flexible code. ";

void setup() {
  Sender::initialize<cSpiPortAddr, cSpiDirAddr, cSpiDataMaskA, cSpiClockMaskA>();
  Sender::initialize<cSpiPortAddr, cSpiDirAddr, cSpiDataMaskB, cSpiClockMaskB>();
  Sender::initialize<cSpiPortAddr, cSpiDirAddr, cSpiDataMaskC, cSpiClockMaskC>();
}

void loop() {
  for (uint8_t i = 0; i < cDataSize-1; ++i ) {
    Sender::sendByte<cSpiPortAddr, cSpiDataMaskA, cSpiClockMaskA>(cDataA[i]);
    Sender::sendByte<cSpiPortAddr, cSpiDataMaskB, cSpiClockMaskB>(cDataB[i]);
    Sender::sendByte<cSpiPortAddr, cSpiDataMaskC, cSpiClockMaskC>(cDataC[i]);
  }
}
