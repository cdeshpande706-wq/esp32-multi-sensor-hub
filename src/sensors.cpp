#include "sensors.h"

#include <Wire.h>
#include <Adafruit_MPU6050.h>
#include <Adafruit_Sensor.h>

Adafruit_MPU6050 mpu;

const int TRIG_PIN = 18;
const int ECHO_PIN = 19;

void initSensors() {
  Wire.begin(21, 22);

  if (!mpu.begin(0x68)) {
    Serial.println("MPU6050 not connected!");
    while (1) {
      delay(10);
    }
  }

  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);

  Serial.println("Sensors initialized.");
}

IMUData readIMU() {
  sensors_event_t acceleration;
  sensors_event_t gyro;
  sensors_event_t temperature;

  mpu.getEvent(&acceleration, &gyro, &temperature);

  IMUData data;

  data.accelX = acceleration.acceleration.x;
  data.accelY = acceleration.acceleration.y;
  data.accelZ = acceleration.acceleration.z;

  return data;
}

float readDistance() {
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);

  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);

  digitalWrite(TRIG_PIN, LOW);

  long duration = pulseIn(ECHO_PIN, HIGH);

  return duration * 0.0343 / 2;
}
