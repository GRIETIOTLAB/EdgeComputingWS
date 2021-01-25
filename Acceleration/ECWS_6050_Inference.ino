#include "model.h"
#include "I2Cdev.h"
#include "MPU6050.h"

#include "Wire.h"
MPU6050 mpu;
#define NUM_SAMPLES 30

float baseline[3];
float features[NUM_SAMPLES*3];
float motion_threshold = 0.5;

Eloquent::ML::Port::RandomForest clf;

void setup() {
  
    Wire.begin();
    Serial.begin(115200);
    mpu.initialize();
    calibrate();  
      
    
   }

void loop() {
   
    float ax,ay,az; 
    mpu_read(&ax,&ay,&az);
    ax=ax-baseline[0];
    ay=ay-baseline[1];
    az=az-baseline[2];

    if(!motion_detected(ax,ay,az)){
     delay(10);
     return;
    }
    
    mpu_record();
    mpu_print_features();
    Serial.print("Detected gesture: ");
    Serial.println(clf.predictLabel(features));

    
    delay(2000);
     
  }
  
void mpu_read(float *ax,float *ay,float *az) {
    int16_t _ax, _ay, _az, _gx, _gy, _gz;

    mpu.getMotion6(&_ax, &_ay, &_az, &_gx, &_gy, &_gz);
    *ax = _ax/16384.0;
    *ay = _ay/16384.0;
    *az = _az/16384.0;
        
}



void calibrate(){
  float ax,ay,az;
  for(int i=0;i < 10;i++){
    mpu_read(&ax,&ay,&az);
    delay(100);
      }
  baseline[0]=ax;
  baseline[1]=ay;
  baseline[2]=az;
}

bool motion_detected(float ax,float ay,float az){

  return(abs(ax)+abs(ay)+abs(az) > motion_threshold);

  
}
void mpu_record(){
  float ax,ay,az;
  for(int i =0;i < NUM_SAMPLES;i++){
    mpu_read(&ax,&ay,&az);
    ax = ax - baseline[0];
    ay = ay - baseline[1];
    az = az - baseline[2];

   features[i*3 + 0] = ax;
   features[i*3 + 1] = ay;
   features[i*3 + 2] = az;
  
  }
}
void mpu_print_features(){
  const uint16_t numfeatures = sizeof(features)/sizeof(float);

  for(int i=0;i < numfeatures;i++){
    Serial.print(features[i]);
    Serial.print(i == numfeatures - 1 ? '\n' : ',');
 
  }
}
