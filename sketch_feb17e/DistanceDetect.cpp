#include "DistanceDetect.h"
/*
  DistanceDetect
  Has constructor and function that returns distance from sonar
*/

DistanceDetect::DistanceDetect(int trigPin, int echoPin)
{
  this->trigPin = trigPin;
  this->echoPin = echoPin;
  pinMode(trigPin, OUTPUT); // set pins to correct input values
  pinMode(echoPin, INPUT);
}

int DistanceDetect::checkDist() {
  long duration, inches;
  digitalWrite(trigPin, LOW);
  delayMicroseconds(5);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  pinMode(echoPin, INPUT);
  duration = pulseIn(echoPin, HIGH);
  inches = duration / 74 / 2;
  return inches;
}
