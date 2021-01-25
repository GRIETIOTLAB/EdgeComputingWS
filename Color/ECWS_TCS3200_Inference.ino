#include "model.h"
#define S2 16
#define S3 17
#define sensorOutput 18
float features[3];

Eloquent::ML::Port::RandomForest random_clf;
void setup() {
  // put your setup code here, to run once:
  pinMode(S2,OUTPUT);
  pinMode(S3,OUTPUT);
  pinMode(sensorOutput,INPUT);
  Serial.begin(115200);

}

void loop() {
  // put your main code here, to run repeatedly:
 readRGB();
 Serial.println(random_clf.predictLabel(features));
 //printFeatures();
 delay(1000);
}

int readComponent(bool S2_Level, bool S3_Level){
  
  digitalWrite(S2,S2_Level);
  digitalWrite(S3,S3_Level);
  return pulseIn(sensorOutput,LOW);
}

void readRGB(){
  features[0]=readComponent(LOW,LOW);
  features[1]=readComponent(HIGH,HIGH);
  features[2]=readComponent(LOW,HIGH);
  }
void printFeatures(){
  const uint16_t numFeatures = sizeof(features)/sizeof(float);
  for(int i =0;i < numFeatures;i++){
    Serial.print(features[i]);
    Serial.print(i == numFeatures-1?'\n':',');
  }
}
