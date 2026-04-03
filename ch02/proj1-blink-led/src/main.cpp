#include <Arduino.h>

// Blink LED sketch

void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT); // set digital pin 13 to output
}
 
void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13, HIGH); // turn on digital pin 13
  delay(2000); // pause for .25s
  digitalWrite(13, LOW); // turn off digital pin 13
  delay(2000); // pause for .25s
}
