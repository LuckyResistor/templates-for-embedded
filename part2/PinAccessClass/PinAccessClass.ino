class Pin13
{
private:
  constexpr static uint8_t _mask = 0b00100000u;
  
public:  
  void configureAsOutput() {
    DDRB |= _mask;
  }

  void setHigh() {
    PORTB |= _mask;
  }

  void setLow() {
    PORTB &= ~_mask;
  }
};

Pin13 cLedPin;

void setup() {
  cLedPin.configureAsOutput();
}

void loop() {
  cLedPin.setHigh();
  cLedPin.setLow();
}
