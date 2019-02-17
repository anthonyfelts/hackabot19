#include "Motor.h"
/*
  DistanceDetect
  Has constructor and function that returns distance from sonar
*/

Motor::Motor(int FPIN, int RPIN)
{
    this->FPIN = FPIN;
    this->RPIN = RPIN;
 }

int Motor::move(int moveValue) {
    moveValue = (moveValue > 255) ? 255 : (moveValue < -255) ? -255 : moveValue;
    analogWrite(FPIN, (moveValue > 20) ? moveValue : 0);
    analogWrite(RPIN, (moveValue < -20) ? -moveValue : 0);
}

int Motor::rotate(int rotateValue){
    rotateValue = (rotateValue > 225) ? 255 : (rotateValue < -255) ? -255 : rotateValue;
    analogWrite(FPIN, (rotateValue > 20) ? rotateValue : 0);
    analogWrite(RPIN, (rotateValue < -20) ? -rotateValue : 0);
}
