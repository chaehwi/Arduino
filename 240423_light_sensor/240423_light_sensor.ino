int pin_CDS = A4;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(pin_CDS, INPUT);
  pinMode(11, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("ADC Data : ");
  int ADC_Data = analogRead(pin_CDS);
  Serial.println(ADC_Data);

  if(ADC_Data > 500){
    digitalWrite(11, LOW);
  } else {
    digitalWrite(11, HIGH);
  }

  delay(500);
  }
