#include <Arduino.h>

// changed pins + wiring to use all pwm capable pins

int d = 5;
int pins[5] = {5,6,9,10,11};

void setup()
{
  pinMode(pins[0], OUTPUT);
  pinMode(pins[1], OUTPUT);
  pinMode(pins[2], OUTPUT);
  pinMode(pins[3], OUTPUT);
  pinMode(pins[4], OUTPUT);
}

void loop()
{
  for ( int b = 0; b < 256; b++ )
  {
    analogWrite(pins[0], b);
    analogWrite(pins[1], b);
    analogWrite(pins[2], b);
    analogWrite(pins[3], b);
    analogWrite(pins[4], b);

    delay(d);
  }

  for ( int b = 256; b >= 0; b-- )
  {
    analogWrite(pins[0], b);
    analogWrite(pins[1], b);
    analogWrite(pins[2], b);
    analogWrite(pins[3], b);
    analogWrite(pins[4], b);
    delay(d);
  }
}

