#define BUZZER_PIN 2  // Ersetze D4 durch den verwendeten GPIO-Pin

void playTone(int duration, int frequency) {
  tone(BUZZER_PIN, frequency);  
  delay(duration);              
  noTone(BUZZER_PIN);      
  delay(duration); 
}


void setup() {
  pinMode(BUZZER_PIN, OUTPUT);
}


void loop() {
  // Alle meine Entchen - Noten: G G A A H H A (erste Zeile, Oktave höher)
  //playTone(1000, 2000); // G (784 Hz, eine Oktave höher als 392 Hz)
   digitalWrite(BUZZER_PIN, HIGH);  // Buzzer an
  delay(500);                    // 1 Sekunde warten
  digitalWrite(BUZZER_PIN, LOW);   // Buzzer aus
  delay(100);                    // 1 Sekunde warten
     
}
