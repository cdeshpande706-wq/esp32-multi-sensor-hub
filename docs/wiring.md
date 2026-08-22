## MPU6050 — I²C Interface

The MPU6050 is connected to the ESP32 using the I²C bus.

| MPU6050 Pin | ESP32 Pin |
|-------------|-----------|
| VCC | 3V3 |
| GND | GND |
| SDA | GPIO 21 |
| SCL | GPIO 22 |

### Test Result

The ESP32 successfully detected the MPU6050 at I²C address `0x68`.

The sensor returned:

- X acceleration: approximately 0 m/s²
- Y acceleration: approximately 0 m/s²
- Z acceleration: approximately 9.81 m/s²

This confirms successful I²C communication and sensor data acquisition.
## HC-SR04 — GPIO Interface

The HC-SR04 is connected to the ESP32 using digital GPIO pins for trigger and echo timing.

| HC-SR04 Pin | ESP32 Pin |
|-------------|-----------|
| VCC | 5V |
| GND | GND |
| TRIG | GPIO 18 |
| ECHO | GPIO 19 |

### Test Result

The ESP32 successfully triggered the HC-SR04 and measured the returned echo signal.

Example simulation output:

- Distance: approximately 403.45 cm

This confirms successful GPIO-based sensor control and distance measurement.
