#include "Sender.hpp"

Sender<_SFR_IO_ADDR(PORTB), _SFR_IO_ADDR(DDRB), 0b00100000u, 0b00010000u> gSender;

const char data[] = "Hello World!";

void setup() {
  gSender.initialize();
}

void loop() {
  for (uint8_t dataByte : data ) {
    gSender.sendByte(dataByte);
  }
}
