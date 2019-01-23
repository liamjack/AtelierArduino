#define RED_PIN 11
#define GREEN_PIN 10
#define BLUE_PIN 9

void setup() {
  pinMode(RED_PIN, OUTPUT);
  pinMode(GREEN_PIN, OUTPUT);
  pinMode(BLUE_PIN, OUTPUT);
}

void loop() {
  analogWrite(RED_PIN, 0);
  analogWrite(GREEN_PIN, 255);
  analogWrite(BLUE_PIN, 0);

  delay(5000);

  analogWrite(RED_PIN, 200);
  analogWrite(GREEN_PIN, 200);
  analogWrite(BLUE_PIN, 0);

  delay(1000);

  analogWrite(RED_PIN, 255);
  analogWrite(GREEN_PIN, 0);
  analogWrite(BLUE_PIN, 0);

  delay(5000);
}
