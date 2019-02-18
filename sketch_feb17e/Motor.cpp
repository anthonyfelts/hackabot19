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
      analogWrite(this->FPIN, moveValue);
    }
    else
    {
      analogWrite(this->RPIN, moveValue);
    }
    return;
}

void Motor::rotate(Motor bitchMotor, int rotateValue, int wait){
    rotateValue = (rotateValue > 255) ? 255 : (rotateValue < -255) ? -255 : rotateValue;

    analogWrite(this->FPIN, rotateValue);
    analogWrite(bitchMotor.RPIN, rotateValue);
    delay(wait);
    analogWrite(this->FPIN, 255);
    analogWrite(bitchMotor.RPIN, 255);
    return;
}
