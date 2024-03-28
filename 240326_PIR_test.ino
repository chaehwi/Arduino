int pin_PIR = 18;
char PIR_flag = 0;

void PIR_ISR(void){ // 새로운 함수
  PIR_flag = 1;
}

void setup() {
  Serial.begin(9600); // 통신시작, 아두이노에서 PC로 보내는 통신 (통신속도)
  pinMode(pin_PIR, INPUT);
  pinMode(19, OUTPUT);
  attachInterrupt(digitalPinToInterrupt(pin_PIR), PIR_ISR, RISING); // 신호가 발생했을 때만 실행하도록 (불규칙한 센서 감지 위함), RISING LOW -> HIGH 일 때 트리거
}

void loop() {
  if(PIR_flag == 1){

        Serial.println("Detected");
        digitalWrite(19, HIGH);
        PIR_flag = 0;

  } else if (PIR_flag == 0){

        Serial.println("Not Detected"); 
        digitalWrite(19, LOW);
        
  }

  delay(500);

}
