#include "Pins.hpp"

Pin13 cLedPin;

void setup() {
  cLedPin.configureAsOutput();
}

void loop() {
  cLedPin.setHigh();
  cLedPin.setLow();  
}
