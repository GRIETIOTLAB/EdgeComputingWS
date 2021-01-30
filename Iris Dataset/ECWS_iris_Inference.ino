#include "model.h"
Eloquent::ML::Port::DecisionTree dct;

void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  float irisSample[4] = {6.2, 2.8, 4.8, 1.8};

    Serial.print("Predicted label (you should see '2': ");
    Serial.println(dct.predict(irisSample));
    delay(1000);

}
