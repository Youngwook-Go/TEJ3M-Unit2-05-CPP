// C++ program
//
// Created by: Youngwook Go
// Created on: OCT 2023
// Moves a servo

#include <Servo.h>

Servo servoNumber1;

void setup() {
  // setup servo pins
  servoNumber1.attach(2);
  servonumber1.write(0);
}

void loop() {
  // put your main code here, to run repeatedly:
  servoNumber1.write(180);
  delay(1000);
  servoNumber1.write(0);
  delay(1000);
}