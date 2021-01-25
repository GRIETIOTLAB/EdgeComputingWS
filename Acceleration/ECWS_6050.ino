#include "I2Cdev.h"
#include "MPU6050.h"

#include "Wire.h"
MPU6050 mpu;
void setup() {
  
    Wire.begin();
    Serial.begin(115200);
    mpu.initialize();
          
    
   }

void loop() {
   
    float ax,ay,az; 
    mpu_read(&ax,&ay,&az);
    Serial.print(ax);
    Serial.print("\t");
    Serial.print(ay);
    Serial.print("\t");
    Serial.println(az);
    delay(10); 
  }
  
void mpu_read(float *ax,float *ay,float *az) {
    int16_t _ax, _ay, _az, _gx, _gy, _gz;

    mpu.getMotion6(&_ax, &_ay, &_az, &_gx, &_gy, &_gz);
    *ax = _ax/16384.0;
    *ay = _ay/16384.0;
    *az = _az/16384.0;
        
}
