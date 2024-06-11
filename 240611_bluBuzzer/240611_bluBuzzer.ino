int pin_a = 20;
int pin_b = 21;
int pin_c = 22;
int pin_d = 23;
int pin_e = 24;
int pin_f = 25;
int pin_g = 26;

void setup() {
  Serial.begin(9600);
  Serial3.begin(9600);

  int i;
  for(i=20; i<=26; i++){
    pinMode(i,OUTPUT);
   }
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

      int j;
        for(j=20; j<=26; j++){
        digitalWrite(j, LOW);
        }

      if(recv == '0'){
        int j;
        for(j=20; j<=26; j++){
        digitalWrite(j, LOW);
        }
      }

      if(recv == '1'){
        digitalWrite(21, HIGH);
        digitalWrite(22, HIGH);
      }

      if(recv == '2'){
        digitalWrite(20, HIGH);
        digitalWrite(21, HIGH);
        digitalWrite(23, HIGH);
        digitalWrite(24, HIGH);
        digitalWrite(26, HIGH);
      }

      if(recv == '3'){
        digitalWrite(20, HIGH);
        digitalWrite(21, HIGH);
        digitalWrite(22, HIGH);
        digitalWrite(23, HIGH);
        digitalWrite(26, HIGH);
      }

      if(recv == '4'){
        digitalWrite(21, HIGH);
        digitalWrite(22, HIGH);
        digitalWrite(25, HIGH);
        digitalWrite(26, HIGH);
      }

      if(recv == '5'){
        digitalWrite(20, HIGH);
        digitalWrite(25, HIGH);
        digitalWrite(26, HIGH);
        digitalWrite(22, HIGH);
        digitalWrite(23, HIGH);
      }

       if(recv == '6'){
        digitalWrite(20, HIGH);
        digitalWrite(25, HIGH);
        digitalWrite(26, HIGH);
        digitalWrite(22, HIGH);
        digitalWrite(23, HIGH);
        digitalWrite(24, HIGH);
      }
      
      if(recv == '7'){
        digitalWrite(20, HIGH);
        digitalWrite(21, HIGH);
        digitalWrite(22, HIGH);
      }
      
      if(recv == '8'){
        digitalWrite(20, HIGH);
        digitalWrite(21, HIGH);
        digitalWrite(22, HIGH);
        digitalWrite(23, HIGH);
        digitalWrite(24, HIGH);
        digitalWrite(25, HIGH);
        digitalWrite(26, HIGH);
      }

      if(recv == '9'){
        digitalWrite(20, HIGH);
        digitalWrite(21, HIGH);
        digitalWrite(22, HIGH);
        digitalWrite(25, HIGH);
        digitalWrite(26, HIGH);
      }


  }

  if(Serial.available()){
    Serial3.write(Serial.read());
  }

}
