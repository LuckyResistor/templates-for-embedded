const uint8_t cLedPin = 13;

void setup() {
  pinMode(cLedPin, OUTPUT);
}

void loop() {
  digitalWrite(cLedPin, HIGH);
  digitalWrite(cLedPin, LOW);
}
