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
  playTone(200, 784); // G (784 Hz, eine Oktave höher als 392 Hz)
  playTone(200, 784); // G (784 Hz)
  playTone(200, 880); // A (880 Hz, eine Oktave höher als 440 Hz)
  playTone(200, 880); // A (880 Hz)
  playTone(200, 988); // H (988 Hz, eine Oktave höher als 494 Hz)
  playTone(200, 988); // H (988 Hz)
  playTone(550, 880); // A (880 Hz, etwas länger)

  delay(1000); // Pause vor Wiederholung         
}
