#include "DistanceDetect.h"
#include "Motor.h"

const int ledPin = 13;
DistanceDetect dist(7,8);
Motor motor_1(5,6);
Motor motor_2(3,11);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (dist.checkDist() < 5) {
    delay(15);
    motor_1.move(0);
    motor_2.move(0);
    return;
  }
  else {
    motor_1.move(-100);
    motor_2.move(-100);
  }
}
