#include "model.h"
#include "DHTesp.h"
#define DHTpin 23
DHTesp dht;
Eloquent::ML::Port::LinearRegression lr;
float temperature[4];
int i;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  dht.setup(DHTpin,DHTesp::DHT11);
  for(i = 0;i < 4;i++){
    temperature[i]=dht.getTemperature();
    delay(2000);
     }
 
 }

void loop() {
  // put your main code here, to run repeatedly:
 
 float predictedTemp = lr.predict(temperature);
 float sensorTemp = dht.getTemperature();

 for(i = 0;i < 3;i++){
  temperature[i] = temperature[i+1];
 }
 temperature[3]=sensorTemp;
 Serial.print(predictedTemp);
 Serial.print('\t');
 Serial.println(sensorTemp);
 delay(2000);
    
}
