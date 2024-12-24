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
  // Aufsteigender Ton
  for (int freq = 400; freq <= 1200; freq += 5) {  // Frequenz von 400 Hz bis 1200 Hz, kleinere Schritte
    for (int i = 0; i < 10; i++) {  // Jede Frequenz 10-mal spielen für langsameren Effekt
      playTone(freq, 10);  // Spiele jede Frequenz für 10 ms
    }
  }

  // Absteigender Ton
  for (int freq = 1200; freq >= 400; freq -= 5) {  // Frequenz von 1200 Hz bis 400 Hz, kleinere Schritte
    for (int i = 0; i < 10; i++) {  // Jede Frequenz 10-mal spielen für langsameren Effekt
      playTone(freq, 10);  // Spiele jede Frequenz für 10 ms
    }
  }
}
