#include "ReverseBits.hpp"

void setup() {
  Serial.begin(115200);
  while (!Serial) {}

  uint32_t value1 = 0b10000000000000000000000010110111u;
  Serial.println(value1, BIN);
  reverseBits(value1);
  Serial.println(value1, BIN);

  uint16_t value2 = 0b1000000010110111u;
  Serial.println(value2, BIN);
  reverseBits(value2);
  Serial.println(value2, BIN);

  uint8_t value3 = 0b10011011u;
  Serial.println(value3, BIN);
  reverseBits(value3);
  Serial.println(value3, BIN);
}

void loop() {
}
