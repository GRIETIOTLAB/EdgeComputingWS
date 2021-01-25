#define MIC 34


void setup() {
    Serial.begin(115200);
    pinMode(MIC, INPUT);

    }

void loop() {
    
      Serial.println(readMic());
      delay(10);
    
}

/**

    Get analog readings
    @return
    */
int16_t readMic() {
    
    return (analogRead(MIC) - 2048) >> 4;
}
