#ifndef SENSORS_H
#define SENSORS_H

struct IMUData {
  float accelX;
  float accelY;
  float accelZ;
};

void initSensors();
IMUData readIMU();
float readDistance();

#endif
