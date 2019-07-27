#include "Sender.hpp"

Sender sender;

const char data[] = "Hello World!";

void setup() {
  sender.begin();
}

void loop() {
  for (uint8_t dataByte : data ) {
    sender.sendByte(dataByte);
  }
}
