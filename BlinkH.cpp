#include "Arduino.h"
#include "BlinkH.h"

BlinkH::BlinkH(int pin)
{
  pinMode(pin, OUTPUT);
  _pin = pin;
}

void BlinkH::BlinkH_C(int dly)
{
  digitalWrite(_pin, HIGH);
  delay(dly);
  digitalWrite(_pin, LOW);
  delay(dly);  
}

void BlinkH::BlinkH_T(int d1,int d2)
{
  digitalWrite(_pin, HIGH);
  delay(d1);
  digitalWrite(_pin, LOW);
  delay(d2);
}