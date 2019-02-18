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

void Motor::move(int moveValue) {
    moveValue = (moveValue > 255) ? 255 : (moveValue < -255) ? -255 : moveValue;
    if (moveValue > -1)
    {
      analogWrite(FPIN, (moveValue > 20) ? moveValue : 0);
    }
    else
    {
      analogWrite(RPIN, (moveValue < -20) ? -moveValue : 0);
    }
    return;
}

void Motor::rotate(Motor bitchMotor, int rotateValue){
    rotateValue = (rotateValue > 255) ? 255 : (rotateValue < -255) ? -255 : rotateValue;

    analogWrite(this->FPIN, rotateValue);
    analogWrite(bitchMotor.FPIN, rotateValue);
    return;
}
