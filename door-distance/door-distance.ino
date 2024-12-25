#include "Adafruit_VL53L0X.h"

// Port des positiven
#define BUZZER_PIN 2

bool doorOpen = false;

Adafruit_VL53L0X lox = Adafruit_VL53L0X();

void setup() {
  Serial.begin(115200);

  pinMode(BUZZER_PIN, OUTPUT);

  // Warten, bis serieller Port verfügbar ist
  while (! Serial) {
    delay(1);
  }

  Serial.println("Adafruit VL53L0X test.");
  if (!lox.begin()) {
    Serial.println(F("Failed to boot VL53L0X"));
    while(1);
  }
   // start continuous ranging
  lox.startRangeContinuous();
}

void loop() {
  if (lox.isRangeComplete()) {
    uint16_t distance = lox.readRange();
    
    if(distance > 100 || distance == 0) {
      Serial.println(distance);
      for(int c=0; c<20; c++) {
        digitalWrite(BUZZER_PIN, HIGH); 
        delay(100);      
        digitalWrite(BUZZER_PIN, LOW);   
        delay(200); 
      }
    }
  }
  Serial.println("Warten...");
  delay(20000);
  Serial.println("Neue Schleife");
}