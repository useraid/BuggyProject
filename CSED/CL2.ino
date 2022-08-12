          
void setup() {
  for (int pin = 8; pin < 13; pin++) {
    pinMode(pin, OUTPUT);
  }
}
void loop() {
  for (int pin = 8;  pin< 13; pin++) {
    digitalWrite(pin, HIGH);
    delay(500);
    digitalWrite(pin, LOW);
  }
  
  for (int pin = 11; pin >= 8; pin--) {
    digitalWrite(pin, HIGH);
    delay(500);
    digitalWrite(pin, LOW);

  }
}
