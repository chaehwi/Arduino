//YWROBOT
//Compatible with the Arduino IDE 1.0
//Library version:1.1
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2);  // set the LCD address to 0x27 for a 16 chars and 2 line display

int pin_UL_TRIG = 7; // 발사시간
int pin_UL_OUT = 8; // 도착시간

int pin_piezo = 2; 


void setup()
{
  Serial.begin(115200);
  pinMode(pin_UL_OUT, INPUT);
  pinMode(pin_UL_TRIG, OUTPUT);
  digitalWrite(pin_UL_TRIG, 0); // 트리거 0으로 초기화

  lcd.init();                      // initialize the lcd 
  lcd.clear();
  // Print a message to the LCD.
  lcd.backlight();
  lcd.setCursor(0,0);
  lcd.print("Hello, world!");

  pinMode(pin_piezo, OUTPUT);
}


void loop()
{

  unsigned long microseconds, distance_cm;

  digitalWrite(pin_UL_TRIG, 0); // 트리거 생성
  delayMicroseconds(2);
  digitalWrite(pin_UL_TRIG, 1);
  delayMicroseconds(10);
  digitalWrite(pin_UL_TRIG, 0);

  // microseconds = pulseIn(pin_UL_OUT, 1, 24000);
  microseconds = pulseIn(pin_UL_OUT, HIGH);
  distance_cm = microseconds * 17/1000;

  lcd.setCursor(0,1);
  lcd.print("U:");
  /* lcd.setCursor(2,1);
  lcd.print(distance_cm); */


  if(distance_cm < 10){
    lcd.setCursor(2,1);
    lcd.print(" ");
    lcd.setCursor(3,1);
    lcd.print(" ");
    lcd.setCursor(4,1);
    lcd.print(distance_cm);

    tone(pin_piezo, 262);
  } else if(distance_cm >= 10 && distance_cm < 100){
    lcd.setCursor(2,1);
    lcd.print(" ");
    lcd.setCursor(3,1);
    lcd.print(distance_cm);

    tone(pin_piezo, 262);
    delay(500);
    noTone(pin_piezo);  
  } else {
    lcd.setCursor(2,1);
    lcd.print(distance_cm);

    noTone(pin_piezo);  
  }


  lcd.setCursor(5,1);
  lcd.print("cm");

  Serial.print(distance_cm);
  Serial.println("[cm]");
  
  delay(100);
}
