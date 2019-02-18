#include "DistanceDetect.h"
#include "Motor.h"
#include <Servo.h>

DistanceDetect dist(7,8);
Motor motor_1(5,6);
Motor motor_2(3,11);
bool part1 = true;
bool part2 = false;
bool part3 = false;
Servo myservo;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  myservo.attach(9);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (part1) {
    int d = dist.checkDist();
    delayMicroseconds(30);
    if (d < 5) {
      delay(1000);
      motor_1.move(255);
      motor_2.move(255);
      part1 = false;
      part2 = true;
      part3 = false;
    }
    else
    {
      motor_1.move(150);
      motor_2.move(150);
      delay(100);
    }
  }
  else if (part2) { //add rotation code
    motor_1.rotate(motor_2, 240);
    delay(100);
    // add servo code
    myservo.write(0);
    delay(100);
    motor_1.move(100);
    motor_2.move(100);
    delay(100);
    motor_2.rotate(motor_1, 240);
    part3 = true;
    part1 = false;
    part2 = false;
  }
  else if (part3) {
    int d = dist.checkDist();
    delayMicroseconds(30);
    if (d <= 1) {
      delay(1000);
      motor_1.move(255);
      motor_2.move(255);
      part1 = false;
      part2 = false;
      part3 = false;
    }
    else
    {
      motor_1.move(150);
      motor_2.move(150);
      delay(100);
    }
  }
}
