
/*
 * Created by K. Suwatchai (Mobizt)
 * 
 * Email: k_suwatchai@hotmail.com
 * 
 * Github: https://github.com/mobizt
 * 
 * Copyright (c) 2019 mobizt
 *
*/

//Required HTTPClientESP32Ex library to be installed  https://github.com/mobizt/HTTPClientESP32Ex

#include <WiFi.h>
#include "FirebaseESP32.h"
#include "DHTesp.h"
#define DHTpin 23
DHTesp dht;

#define FIREBASE_HOST "xxxxxxxxxxxxxxxxxxxxxxxxxxx" //Do not include https:// in FIREBASE_HOST
#define FIREBASE_AUTH "xxxxxxxxxxxxxxxxxxxxxxxxxxx"
#define WIFI_SSID "xxxxxxxxxxxxx"
#define WIFI_PASSWORD "xxxxxxxxxxxxxxxx"


//Define Firebase Data object
FirebaseData firebaseData;
float temperature;
float humidity;
void setup()
{

  Serial.begin(115200);
  Serial.println();
  Serial.println();

  WiFi.begin(WIFI_SSID, WIFI_PASSWORD);
  Serial.print("Connecting to Wi-Fi");
  while (WiFi.status() != WL_CONNECTED)
  {
    Serial.print(".");
    delay(300);
  }
  Serial.println();
  Serial.print("Connected with IP: ");
  Serial.println(WiFi.localIP());
  Serial.println();

  Firebase.begin(FIREBASE_HOST, FIREBASE_AUTH);
  Firebase.reconnectWiFi(true);

   dht.setup(DHTpin,DHTesp::DHT11);
}

void loop(){
   
   temperature = dht.getTemperature();
   humidity = dht.getHumidity();
   Serial.print(temperature);
   Serial.print('\t');
   Serial.println(humidity);
   Firebase.setFloat(firebaseData,"DHT11_Data/Temperature",temperature);
   Firebase.setFloat(firebaseData,"DHT11_Data/Humidity",humidity);
   delay(2000);
}
