/*
  DistanceDetect.h, Library created to check distance from Arduino sonar
*/
#ifndef Motor_h
#define Motor_h

#include "Arduino.h"

class Motor
{
  public:
    Motor(int FPIN, int RPIN);
    int move(int moveValue);
    int rotate(int rotateValue);
  private:
    int FPIN;
    int RPIN;
};

#endif
