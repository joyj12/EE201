int a = 2; // a is connected to pin 2
int b = 3; // b is connected to pin 3
int c = 4; // c is connected to pin 4
int d = 5; // d is connected to pin 5
int e = 6; // e is connected to pin 6
int f = 7; // f is connected to pin 7
int g = 8; // g is connected to pin 8

void setup() {
  pinMode(a, OUTPUT); // setting a to output
  pinMode(b, OUTPUT); // setting b to output
  pinMode(c, OUTPUT); // setting c to output
  pinMode(d, OUTPUT); // setting d to output
  pinMode(e, OUTPUT); // setting e to output
  pinMode(f, OUTPUT); // setting f to output
  pinMode(g, OUTPUT); // setting g to output
}

void loop() {
  for (int i = 9; i >= 0; i--) {
     if (i == 9) {
        //display num 9   
        // a, b, c, d, f, g  on
        digitalWrite(a, LOW);
        digitalWrite(b, LOW);
        digitalWrite(c, LOW);
        digitalWrite(d, LOW);
        digitalWrite(f, LOW);
        digitalWrite(g, LOW);
        // e off
        digitalWrite(e, HIGH);
     } else if (i == 8) {
        //display num 8   
        // a, b, c, d, e, f, g on 
        digitalWrite(a, LOW);
        digitalWrite(b, LOW);
        digitalWrite(c, LOW);
        digitalWrite(d, LOW);
        digitalWrite(e, LOW);
        digitalWrite(f, LOW);
        digitalWrite(g, LOW);  
     } else if (i == 7) {
        //display num 7   
        // a, b, c, f on
        digitalWrite(a, LOW);
        digitalWrite(b, LOW);
        digitalWrite(c, LOW);
        digitalWrite(f, LOW);
        // d, e, g off
        digitalWrite(d, HIGH);
        digitalWrite(e, HIGH);
        digitalWrite(g, HIGH);
     } else if (i == 6) {
        //display num 6   
        // a, c, d, e, f, g on
        digitalWrite(a, LOW);
        digitalWrite(c, LOW);
        digitalWrite(d, LOW);
        digitalWrite(e, LOW);
        digitalWrite(f, LOW);
        digitalWrite(g, LOW);
        // b off
        digitalWrite(b, HIGH);
     } else if (i == 5) {
        //display num 5   
        // a, c, d, f, g on
        digitalWrite(a, LOW);
        digitalWrite(c, LOW);
        digitalWrite(d, LOW);
        digitalWrite(f, LOW);
        digitalWrite(g, LOW);
        // b, e off
        digitalWrite(b, HIGH);
        digitalWrite(e, HIGH);
     } else if (i == 4) {
        //display num 4   
        // b, c, d, f, g on
        digitalWrite(b, LOW);
        digitalWrite(c, LOW);
        digitalWrite(d, LOW);
        digitalWrite(f, LOW);
        digitalWrite(g, LOW);
        // a, e off 
        digitalWrite(a, HIGH);
        digitalWrite(e, HIGH);
     } else if (i == 3) {
        //display num 3   
        // a, b, c, d, g on
        digitalWrite(a, LOW);
        digitalWrite(b, LOW);
        digitalWrite(c, LOW);
        digitalWrite(d, LOW);
        digitalWrite(g, LOW);
        // e, f off
        digitalWrite(e, HIGH);
        digitalWrite(f, HIGH);
     } else if (i == 2) {
        //display num 2   
        // a, b, d, e, g on
        digitalWrite(a, LOW);
        digitalWrite(b, LOW);
        digitalWrite(d, LOW);
        digitalWrite(e, LOW);
        digitalWrite(g, LOW);
        // c, f off 
        digitalWrite(c, HIGH);
        digitalWrite(f, HIGH);
     } else if (i == 1) {
        //display num 1   
        // b, c on
        digitalWrite(b, LOW);
        digitalWrite(c, LOW);
        // a, d, e, f, g off 
        digitalWrite(a, HIGH);
        digitalWrite(d, HIGH);
        digitalWrite(e, HIGH);
        digitalWrite(f, HIGH);
        digitalWrite(g, HIGH);
     } else if (i == 0) {
        //display num 0   
        // a, b, c, d, e, f on
        digitalWrite(a, LOW);
        digitalWrite(b, LOW);
        digitalWrite(c, LOW);
        digitalWrite(d, LOW);
        digitalWrite(e, LOW);
        digitalWrite(f, LOW);
        // g off 
        digitalWrite(g, HIGH);
     }
     delay(1500);
  }
}
