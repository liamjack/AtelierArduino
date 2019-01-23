#define BUTTON_PIN 2

void setup() {
  Serial.begin(115200);

  pinMode(BUTTON_PIN, INPUT);
}

void loop() {
  int buttonState = digitalRead(BUTTON_PIN);

  if (buttonState == HIGH) {
    Serial.println("Button pressed !");
    delay(100);
  }
}
