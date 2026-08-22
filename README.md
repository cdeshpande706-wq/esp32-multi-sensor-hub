# esp32-multi-sensor-hub
ESP32 Multi-Sensor Hub demonstrates how multiple sensors and actuators can be integrated and controlled using a single ESP32. The project covers GPIO, I²C, PWM, sensor data acquisition, actuator control, system architecture, and basic firmware design, with the complete setup tested through simulation.
## Results

The system was successfully simulated and tested in Wokwi.

The ESP32 simultaneously:

- Read acceleration data from the MPU6050 through I²C
- Measured distance using the HC-SR04 through GPIO
- Controlled a servo through PWM
- Used the distance measurement to determine the servo position

Example output:

```text
Accel X: 0.00 | Y: 0.00 | Z: 9.81
Distance: 403.57 cm
Servo Position: 90°
Status

Completed
