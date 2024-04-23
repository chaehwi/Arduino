int pin_BUZZER = 35;

void setup() {
  pinMode(pin_BUZZER, OUTPUT);
}

void loop() {

  tone(pin_BUZZER, 261); // 도
  delay(1000);
  tone(pin_BUZZER, 293); // 레
  delay(1000);
  tone(pin_BUZZER, 329); // 미
  delay(1000);
  tone(pin_BUZZER, 349); // 파
  delay(1000);
  tone(pin_BUZZER, 391); // 솔
  delay(1000);
  tone(pin_BUZZER, 440); // 라
  delay(1000);
  tone(pin_BUZZER, 493); // 시
  delay(1000);
  tone(pin_BUZZER, 523); // 5옥타브 도
  delay(1000);


  noTone(pin_BUZZER);
  delay(1000);



}