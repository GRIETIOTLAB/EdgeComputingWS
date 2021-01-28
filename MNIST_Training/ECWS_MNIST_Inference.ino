#include <EloquentTinyML.h>
#include "model.h"

#define NUMBER_OF_INPUTS 64
#define NUMBER_OF_OUTPUTS 10
// in future projects you may need to tweek this value: it's a trial and error process
#define TENSOR_ARENA_SIZE 8*1024

Eloquent::TinyML::TfLite<NUMBER_OF_INPUTS, NUMBER_OF_OUTPUTS, TENSOR_ARENA_SIZE> ml;


void setup() {
    Serial.begin(115200);
    ml.begin(digits_model);
}

void loop() {
    // pick up a random x and predict its sine
    float x_test[64] = { 0.    , 0.    , 0.625 , 0.875 , 0.5   , 0.0625, 0.    , 0.    ,
                         0.    , 0.125 , 1.    , 0.875 , 0.375 , 0.0625, 0.    , 0.    ,
                         0.    , 0.    , 0.9375, 0.9375, 0.5   , 0.9375, 0.    , 0.    ,
                         0.    , 0.    , 0.3125, 1.    , 1.    , 0.625 , 0.    , 0.    ,
                         0.    , 0.    , 0.75  , 0.9375, 0.9375, 0.75  , 0.    , 0.    ,
                         0.    , 0.25  , 1.    , 0.375 , 0.25  , 1.    , 0.375 , 0.    ,
                         0.    , 0.5   , 1.    , 0.625 , 0.5   , 1.    , 0.5   , 0.    ,
                         0.    , 0.0625, 0.5   , 0.75  , 0.875 , 0.75  , 0.0625, 0.    };
    float y_pred[10] = {0};
    int y_test = 8;

    uint32_t start = micros();
    ml.predict(x_test, y_pred);
    uint32_t timeit = micros() - start;
    Serial.print("It took ");
    Serial.print(timeit);
    Serial.println(" micros to run inference");

    Serial.print("Test output is: ");
    Serial.println(y_test);
    Serial.print("Predicted proba are: ");

    for (int i = 0; i < 10; i++) {
        Serial.print(y_pred[i]);
        Serial.print(i == 9 ? '\n' : ',');
    }

    uint8_t pred_class = 0;
    float max_proba = y_pred[0];

    for (int i = 1; i < 10; i++) {
        if (y_pred[i] > max_proba) {
            pred_class = i;
            max_proba = y_pred[i];
        }
    }

    Serial.print("Predicted output is: ");
    Serial.println(pred_class);

    delay(1000);
}
