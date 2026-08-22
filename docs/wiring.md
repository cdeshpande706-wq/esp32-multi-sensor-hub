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
