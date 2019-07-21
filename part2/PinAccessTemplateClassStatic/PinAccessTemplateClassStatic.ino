#include "Pins.hpp"

void setup() {
  Pin13::configureAsOutput();
}

void loop() {
  Pin13::setHigh();
  Pin13::setLow();  
}
