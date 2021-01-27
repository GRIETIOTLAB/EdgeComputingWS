# EdgeComputingWS
C code for the G-Edge board and Python code for ML using G-Edge datasets

The G-Edge board based on the ESP32 processor has the following sensors/actuators:
- DHT11 Temperature & Humidity sensor
- TCS3200 Color sensor
- MPU6050 Multi-axes accelerometer and gyro sensor
- Relay

The codes are in 3 categories:
- Basic sensor reading - C code to be run on the G-Edge board
- Generating datasets - C code to be run on the G-Edge board
- Google Colab notebooks for ML model generation using G-Edge datasets
- Inference code to be run on G-Edge with the trained model in place

The procedure for making the Arduino IDEraedy to program the ESP32 boards is as under:
https://circuitdigest.com/microcontroller-projects/programming-esp32-with-arduino-ide
