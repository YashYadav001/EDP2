const int greenLED1 = 2;
const int yellowLED1 = 3;
const int redLED1 = 4;
const int greenLED2 = 5;
const int yellowLED2 = 6;
const int redLED2 = 7;

void setup() {
  Serial.begin(9600);

  pinMode(greenLED1, OUTPUT);
  pinMode(yellowLED1, OUTPUT);
  pinMode(redLED1, OUTPUT);
  pinMode(greenLED2, OUTPUT);
  pinMode(yellowLED2, OUTPUT);
  pinMode(redLED2, OUTPUT);
}

void loop() {
  char input[7];
  int greenTime1, yellowTime1, redTime1, greenTime2, yellowTime2, redTime2;

  if (Serial.available() >= 6) {
    for (int i = 0; i < 6; i++) {
      input[i] = Serial.read(); // Read each character
    }
    input[6] = '\0'; // Null-terminate the character array

    // Extract individual digits
    greenTime1 = input[0] - '0';
    yellowTime1 = input[1] - '0';
    redTime1 = input[2] - '0';
    greenTime2 = input[3] - '0';
    yellowTime2 = input[4] - '0';
    redTime2 = input[5] - '0';

    // Validate input values
    if (isValidTiming(greenTime1, yellowTime1, redTime1) && isValidTiming(greenTime2, yellowTime2, redTime2)) {
      trafficLight(greenTime1, yellowTime1, redTime1, greenTime2, yellowTime2, redTime2);
    } else {
      Serial.println("Invalid timing input. Please enter values between 0 and 9.");
    }
  }
}

void trafficLight(int greenTime1, int yellowTime1, int redTime1, int greenTime2, int yellowTime2, int redTime2) {
  // Traffic light cycle for set 1
  digitalWrite(greenLED1, HIGH);
  Serial.println("Set 1 - Green LED ON, Timer: " + String(greenTime1));
  delay(greenTime1 * 1000);
  digitalWrite(greenLED1, LOW);

  digitalWrite(yellowLED1, HIGH);
  Serial.println("Set 1 - Yellow LED ON, Timer: " + String(yellowTime1));
  delay(yellowTime1 * 1000);
  digitalWrite(yellowLED1, LOW);

  digitalWrite(redLED1, HIGH);
  Serial.println("Set 1 - Red LED ON, Timer: " + String(redTime1));
  delay(redTime1 * 1000);
  digitalWrite(redLED1, LOW);

  // Traffic light cycle for set 2
  digitalWrite(greenLED2, HIGH);
  Serial.println("Set 2 - Green LED ON, Timer: " + String(greenTime2));
  delay(greenTime2 * 1000);
  digitalWrite(greenLED2, LOW);

  digitalWrite(yellowLED2, HIGH);
  Serial.println("Set 2 - Yellow LED ON, Timer: " + String(yellowTime2));
  delay(yellowTime2 * 1000);
  digitalWrite(yellowLED2, LOW);

  digitalWrite(redLED2, HIGH);
  Serial.println("Set 2 - Red LED ON, Timer: " + String(redTime2));
  delay(redTime2 * 1000);
  digitalWrite(redLED2, LOW);
}

bool isValidTiming(int green, int yellow, int red) {
  return (green >= 0 && green <= 9 && yellow >= 0 && yellow <= 9 && red >= 0 && red <= 9);
}
