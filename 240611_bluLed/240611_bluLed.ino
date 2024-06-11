int led = 10;
int Buzzer_pin = 11;

void setup() {
  Serial.begin(9600);
  Serial3.begin(9600);

  pinMode(led, OUTPUT);
  pinMode(Buzzer_pin, OUTPUT);
}

void loop() {
  /*
  if(Serial3.available() > 0){
    char recv = Serial3.read();
    Serial3.write(recv);
    Serial.println(recv);
  }
  */

  // Serial3 => 14, 15 핀 사용

  if(Serial3.available()){
    char recv = Serial3.read(); // 수신(스마트폰 -> 블루 -> 아두이노)
    Serial.write(recv); // 송신(아두이노 -> 블루 -> 스마트폰)
    Serial.write("\n"); // 출력

      if(recv == '1'){
        tone(Buzzer_pin, 523);
        // digitalWrite(led, HIGH);
      }

      if(recv == '2'){
        tone(Buzzer_pin, 587);
        // digitalWrite(led, LOW);
      }

      if(recv == '3'){
        tone(Buzzer_pin, 659);
      }

      if(recv == '4'){
        tone(Buzzer_pin, 698);
      }

      if(recv == '5'){
        tone(Buzzer_pin, 783);
      }

      if(recv == '6'){
        tone(Buzzer_pin, 880);
      }

      if(recv == '7'){
        tone(Buzzer_pin, 987);
      }

      if(recv == '8'){
        tone(Buzzer_pin, 1046);
      }

      if(recv == '0'){
        noTone(Buzzer_pin);
      }
  }

  if(Serial.available()){
    Serial3.write(Serial.read());
  }

}
