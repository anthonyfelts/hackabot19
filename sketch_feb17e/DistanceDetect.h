/*
  DistanceDetect.h, Library created to check distance from Arduino sonar
*/
#ifndef DistanceDetect_h
#define DistanceDetect_h

#include "Arduino.h"
#include "DistanceDetect.h"

class DistanceDetect
{
  public:
    DistanceDetect(int trigPin, int echoPin);
    int trigPin;
    int echoPin;
    int checkDist();
};

#endif
