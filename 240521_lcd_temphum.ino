#include <dht11.h>
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2);

dht11 DHT11;
int pin_DHT11 = 6;

void setup() {
  Serial.begin(115200);

  lcd.init();                     
  lcd.clear();
  lcd.backlight();
  lcd.setCursor(0,0);
  lcd.print("CHEA HWI");
}

void loop() {
  int chk = DHT11.read(pin_DHT11);

  switch (chk) {
    case DHTLIB_OK:
      Serial.print("Temperature : ");
      Serial.print(DHT11.temperature);
      Serial.print("[C] Humidity : ");
      Serial.print(DHT11.humidity);
      Serial.println("[%]");

      lcd.setCursor(0,1);
    lcd.print("T:");
    lcd.setCursor(3,1);
    lcd.print(DHT11.temperature);
    lcd.setCursor(5,1);
    lcd.print("C");

    lcd.setCursor(7,1);
    lcd.print("H:");
    lcd.setCursor(9,1);
    lcd.print(DHT11.humidity);
    lcd.setCursor(11,1);
    lcd.print("%");

    break;

    case DHTLIB_ERROR_CHECKSUM:
      Serial.println("Checksum error");
      break;

    case DHTLIB_ERROR_TIMEOUT:
      Serial.println("Time out error");
      break;

    default:
      Serial.println("Unknown error");
      break;
  }


  delay(1000);
}