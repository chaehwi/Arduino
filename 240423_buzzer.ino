int pin_BUZZER = 35;

void setup() {
  // put your setup code here, to run once:
  pinMode(pin_BUZZER, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(pin_BUZZER, HIGH);
  delay(1000);
  digitalWrite(pin_BUZZER, LOW);
  delay(1000);
}
