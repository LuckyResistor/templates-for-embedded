#include "Sender.hpp"

const uint8_t cSpiPortAddr = _SFR_IO_ADDR(PORTB);
const uint8_t cSpiDirAddr = _SFR_IO_ADDR(DDRB);
const uint8_t cSpiDataMask = 0b00100000u;
const uint8_t cSpiClockMask = 0b00010000u;

const char data[] = "Hello World!";

void setup() {
  Sender::initialize<cSpiPortAddr, cSpiDirAddr, cSpiDataMask, cSpiClockMask>();
}

void loop() {
  for (uint8_t dataByte : data ) {
    Sender::sendByte<cSpiPortAddr, cSpiDataMask, cSpiClockMask>(dataByte);
  }
}
