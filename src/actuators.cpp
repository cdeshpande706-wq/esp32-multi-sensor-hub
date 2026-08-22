#include "actuators.h"

#include <ESP32Servo.h>

Servo servo;

const int SERVO_PIN = 13;

void initActuators() {
  servo.attach(SERVO_PIN);
  servo.write(90);
}

void setServoPosition(int position) {
  servo.write(position);
}
