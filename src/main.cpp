#include <Arduino.h>

#include "sensors.h"
#include "actuators.h"

void setup() {
  Serial.begin(115200);

  initSensors();
  initActuators();

  Serial.println("ESP32 Multi-Sensor Hub started!");
}

void loop() {

  IMUData imu = readIMU();
  float distance = readDistance();

  int servoPosition;

  if (distance < 100) {
    servoPosition = 30;
  } else {
    servoPosition = 90;
  }

  setServoPosition(servoPosition);

  Serial.println("----------------------------");

  Serial.print("Accel X: ");
  Serial.print(imu.accelX);

  Serial.print(" | Y: ");
  Serial.print(imu.accelY);

  Serial.print(" | Z: ");
  Serial.println(imu.accelZ);

  Serial.print("Distance: ");
  Serial.print(distance);

  Serial.println(" cm");

  Serial.print("Servo Position: ");
  Serial.print(servoPosition);

  Serial.println("°");

  delay(500);
}
