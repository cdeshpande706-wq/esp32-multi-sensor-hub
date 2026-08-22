# System Architecture

## Overview

The ESP32 acts as the central controller, integrating two sensors and one actuator through different hardware interfaces.

```text
                         ESP32
                    Central Controller
                         │
          ┌──────────────┼──────────────┐
          │              │              │
         I²C            GPIO            PWM
          │              │              │
          ▼              ▼              ▼
      MPU6050          HC-SR04         Servo
       IMU            Distance        Actuator
      Sensor           Sensor
          │              │
          │              ▼
          │        Distance Logic
          │              │
          └──────────────┤
                         ▼
                   Servo Position
```

## Data Flow

1. The MPU6050 provides acceleration and gyroscope data through I²C.
2. The HC-SR04 measures distance through GPIO trigger and echo signals.
3. The ESP32 processes the sensor readings.
4. The distance measurement determines the servo position.
5. The servo receives a control signal through GPIO 13.

## Interfaces

* **I²C:** MPU6050 communication
* **GPIO:** HC-SR04 trigger and echo
* **PWM:** Servo control

## Current Status

All three peripherals have been successfully integrated and tested simultaneously in Wokwi.

