#define RED_PIN 12
#define YELLOW_PIN 11
#define GREEN_PIN 10

void setup() {
  pinMode(RED_PIN, OUTPUT);
  pinMode(YELLOW_PIN, OUTPUT);
  pinMode(GREEN_PIN, OUTPUT);
}

void loop() {
  digitalWrite(RED_PIN, LOW);
  digitalWrite(YELLOW_PIN, LOW);
  digitalWrite(GREEN_PIN, HIGH);

  delay(5000);

  digitalWrite(YELLOW_PIN, HIGH);
  digitalWrite(GREEN_PIN, LOW);

  delay(1000);

  digitalWrite(YELLOW_PIN, LOW);
  digitalWrite(RED_PIN, HIGH);

  delay(5000);
}
