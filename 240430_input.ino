int pin_JOY_H = A0; // 수평 
int pin_JOY_V = A1; // 수직
int pin_SEL = 49; // 조이스틱 선택

int push_up = 0;
int push_down = 0;
int push_left = 0;
int push_right = 0;

int pin_UP = 45;
int pin_DOWN = 46;
int pin_LEFT = 47;
int pin_RIGHT = 48;

int pin_piezo = 35;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);

  pinMode(pin_JOY_H, INPUT);
  pinMode(pin_JOY_V, INPUT);
  pinMode(pin_SEL, INPUT);

  pinMode(pin_UP, INPUT);
  pinMode(pin_DOWN, INPUT);
  pinMode(pin_LEFT, INPUT);
  pinMode(pin_RIGHT, INPUT);

  pinMode(pin_piezo, INPUT);
  pinMode(pin_piezo, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("JOY_H : ");
  Serial.print(analogRead(pin_JOY_H));

  Serial.print(", JOY_V : ");
  Serial.print(analogRead(pin_JOY_V));

  Serial.print(", SEL : ");
  Serial.print(digitalRead(pin_SEL));

  Serial.print(" **** UP : ");
  Serial.print(digitalRead(pin_UP));
  push_up = digitalRead(pin_UP);

  Serial.print(", DOWN : ");
  Serial.print(digitalRead(pin_DOWN));
  push_down = digitalRead(pin_DOWN);

  Serial.print(", LEFT : ");
  Serial.print(digitalRead(pin_LEFT));
  push_left = digitalRead(pin_LEFT);

  Serial.print(", RIGHT : ");
  Serial.println(digitalRead(pin_RIGHT));
  push_right = digitalRead(pin_RIGHT);

  /* if(push_up == 0){
    tone(pin_piezo,523);
    delay(100);
  } else {
    noTone(pin_piezo); 
  }
  
  if(push_down == 0){
    tone(pin_piezo,587);
    delay(100);
  } else {
    noTone(pin_piezo); 
  }

  if(push_left == 0){
    tone(pin_piezo,659);
    delay(100);
  } else {
    noTone(pin_piezo); 
  }

  if(push_right == 0){
    tone(pin_piezo,698);
    delay(100);
  } else {
    noTone(pin_piezo); 
  }

  */

  if(push_up == 0){
    tone(pin_piezo,523);
    delay(100);
  } else if(push_down == 0){  
    tone(pin_piezo,587);
    delay(100);
  } else if(push_left == 0){
    tone(pin_piezo,659);
    delay(100);
  } else if(push_right == 0){
    tone(pin_piezo,698);
    delay(100);
  } else {
    noTone(pin_piezo); 
    delay(100);
  }
  // delay(100);
  // digitalWrite(pin_LED_RED,LOW);

}
