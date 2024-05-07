// 황채휘_240507_임베디드종합실습

int pin_UL_TRIG = 7; // 발사시간
int pin_UL_OUT = 8; // 도착시간

int pin_LED = 15;

void setup() {
  Serial.begin(115200);
  pinMode(pin_UL_OUT, INPUT);
  pinMode(pin_UL_TRIG, OUTPUT);
  digitalWrite(pin_UL_TRIG, 0); // 트리거 0으로 초기화

  pinMode(pin_LED, INPUT);
  pinMode(pin_LED, OUTPUT);
}

void loop() {
  unsigned long microseconds, distance_cm;

  digitalWrite(pin_UL_TRIG, 0); // 트리거 생성
  delayMicroseconds(2);
  digitalWrite(pin_UL_TRIG, 1);
  delayMicroseconds(10);
  digitalWrite(pin_UL_TRIG, 0);

  // microseconds = pulseIn(pin_UL_OUT, 1, 24000);
  microseconds = pulseIn(pin_UL_OUT, HIGH);
  distance_cm = microseconds * 17/1000;

  if(distance_cm <= 15){
    digitalWrite(pin_LED, HIGH);
  }else if(distance_cm > 15 && distance_cm <= 30){
    digitalWrite(pin_LED, HIGH);
    delay(100);
    digitalWrite(pin_LED, LOW);
  } else {
    digitalWrite(pin_LED, LOW);
  }


  Serial.print("Time : ");
  Serial.print(microseconds);
  Serial.print("[us], Dist : ");
  Serial.print(distance_cm);
  Serial.println("[cm]");
  delay(1000);

}
