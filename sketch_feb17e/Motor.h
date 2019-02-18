/*
  DistanceDetect.h, Library created to check distance from Arduino sonar
*/
#ifndef Motor_h
#define Motor_h

#include "Arduino.h"
#include "Motor.h"

class Motor
{
  public:
    Motor(int FPIN, int RPIN);
    void move(int moveValue);
    void rotate(Motor bitchMotor, int rotateValue, int wait);
    int FPIN;
    int RPIN;
};

#endif
