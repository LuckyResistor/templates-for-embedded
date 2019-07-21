#include "Sender.hpp"
#include "Pins.hpp"

Sender<Pin13, Pin12> gSenderA;
Sender<Pin11, Pin10> gSenderB;
Sender<Pin9, Pin8> gSenderC;

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
