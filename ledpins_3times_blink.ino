const int ledPins[] = {2, 9, 3};
int blinkCount = 0;

void setup() {
  for (int i = 0; i < 3; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {
  if (blinkCount < 3) {
    for (int i = 0; i < 3; i++) {
      digitalWrite(ledPins[i], HIGH);
    }
    delay(500);
    for (int i = 0; i < 3; i++) {
      digitalWrite(ledPins[i], LOW);
    }
    delay(500); 
    blinkCount++;
  } else {
    while (true) {}
  }
}
