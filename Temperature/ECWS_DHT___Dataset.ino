#include "DHTesp.h"
#define DHTpin 23
DHTesp dht;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  dht.setup(DHTpin,DHTesp::DHT11);
 }

void loop() {
  // put your main code here, to run repeatedly:
 
 
  for(int i = 0;i < 5;i++){
  delay(2000);
  float t = dht.getTemperature();
  Serial.print(t);
  if(i < 4)
  Serial.print(",");
  else
  Serial.println();
   }

  
}
