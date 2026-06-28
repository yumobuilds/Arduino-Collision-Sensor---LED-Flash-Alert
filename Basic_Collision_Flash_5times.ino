const int crashPin = 3;
const int ledPin = 13;

void setup() {
  pinMode(crashPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {

  if (digitalRead(crashPin) == LOW) {

    for (int i = 0; i < 5; i++) {
      digitalWrite(ledPin, HIGH);
      delay(150);
      digitalWrite(ledPin, LOW);
      delay(150);
    }

    delay(500);
  }

}