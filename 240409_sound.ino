int pin_SOUND = A6;


void setup() {
  Serial.begin(115200); // 통신속도
  pinMode(pin_SOUND, INPUT);

  for(int i=11; i<20; i++){
    pinMode(i,OUTPUT);
   }
}

void loop() {
  int ADC_data = analogRead(pin_SOUND); // 소리센서는 아날로그 입력 
  Serial.print("ADC Data : ");
  Serial.println(ADC_data);

  if(ADC_data >= 100){ // 511 => 2.5v , 1023 => 5v (analogRead 함수에서 계산)
    // Serial.println("Noise");
    pin_11_LED();
    pin_12_LED();
    pin_13_LED();
  } else if(ADC_data >= 50 && ADC_data < 100){
    // Serial.println("Quiet");
    pin_11_LED();
    pin_12_LED();
  } else if(ADC_data >= 10 && ADC_data < 50){
    // Serial.println("Quiet");
    pin_11_LED();
  }

  LED_LOW();

  delay(500);

}

void pin_11_LED(void){
    digitalWrite(11,HIGH);
    delay(200);
}

void pin_12_LED(void){
    digitalWrite(12,HIGH);
    delay(200);
}

void pin_13_LED(void){
    digitalWrite(13,HIGH);
    delay(200);
}

void LED_LOW(void){
  for(int i = 11; i <= 20; i++){
    digitalWrite(i,LOW);
  }
}
