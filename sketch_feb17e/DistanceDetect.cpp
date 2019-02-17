#include "DistanceDetect.h"
/*
  DistanceDetect
  Has constructor and function that returns distance from sonar
*/

DistanceDetect::DistanceDetect(int trigPin, int echoPin)
{
  this.trigPin = trigPin;
  this.echoPin = echoPin;
  pinMode(trigPin, OUTPUT); // set pins to correct input values
  pinMode(echoPin, INPUT);
}

int DistanceDetect::checkDist() {
  long duration, cm, inches;
  digitalWrite(trigPin, LOW);
  delayMicroseconds(5);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  pinMode(echoPin, INPUT);
  duration = pulseIn(echoPin, HIGH);
  cm = (duration/2) / 29.1;
  return cm;
  delay(350);
}
