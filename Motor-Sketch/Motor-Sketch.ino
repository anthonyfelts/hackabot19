#include "Motor.h"

Motor motor_1(5,6);
Motor motor_2(3,11);
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  motor_1.move(100);
  motor_2.move(100);

}