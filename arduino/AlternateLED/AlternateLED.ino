int red = 12; // the red led is connected to pin 12
int blue = 13; // the blue led is connected to pin 13

void setup() {
  // put your setup code here, to run once:
  pinMode(red, OUTPUT); // setting the red led to output
  pinMode(blue, OUTPUT); // setting the blue led to output
}

void loop() {
  // depending on the switch value, print appropriate statements
  digitalWrite(red, LOW); // turning on the red LED
  delay(1000);
  digitalWrite(red, HIGH); // turining off the red LED
  delay(1000);
  digitalWrite(blue, LOW); // turning on the blue LED
  delay(1000);
  digitalWrite(blue, HIGH); // turining off the blue LED
  delay(1000);
}
