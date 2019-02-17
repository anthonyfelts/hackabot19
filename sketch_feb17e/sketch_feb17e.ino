#include "DistanceDetect.h"

const int ledPin = 13;
DistanceDetect dist(7,8);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  int i = dist.checkDist();
  Serial.print(i);
  if(i > 5 && i < 10){
      digitalWrite(ledPin, HIGH);
  }
  else{
      digitalWrite(ledPin, LOW);
  }
  delay(250);
}
