
#ifndef BlinkH_h
#define BlinkH_h

#include "Arduino.h"

class BlinkH
{
  public:
    BlinkH(int pin);
    void BlinkH_C(int dly);
    void BlinkH_T(int d1,int d2);
  private:
    int _pin;
};

#endif