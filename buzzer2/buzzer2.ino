#define BUZZER_PIN 2  // GPIO4 ist der Buzzer-Pin

void playTone(int frequency, int duration) {
  digitalWrite(BUZZER_PIN, HIGH);
  delayMicroseconds(1000000 / frequency / 2);
  digitalWrite(BUZZER_PIN, LOW);
  delayMicroseconds(1000000 / frequency / 2);
}

void setup() {
  pinMode(BUZZER_PIN, OUTPUT);
}

void loop() {
  // Alarm-Ton: Wechsel zwischen zwei Frequenzen
  for (int i = 0; i < 20; i++) {
    playTone(800, 250);  // Ton mit 800 Hz für 250 ms
  }
  delay(250);  // Pause zwischen Alarmzyklen
  for (int i = 0; i < 20; i++) {
    playTone(400, 250);  // Ton mit 400 Hz für 250 ms
  }
  delay(100);  // kurze Pause 
}
