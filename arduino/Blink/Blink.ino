void setup() {
  pinMode(13, OUTPUT); // setting pin 13 as output
}

void loop() {
  digitalWrite(13, HIGH); // turning on the LED
  delay(1000);
  digitalWrite(13, LOW); // turining off the LED
  delay(1000);
}
