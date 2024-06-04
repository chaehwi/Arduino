

void setup() {
  Serial.begin(9600);
  Serial3.begin(9600);
}

void loop() {
  /*
  if(Serial3.available() > 0){
    char recv = Serial3.read();
    Serial3.write(recv);
    Serial.println(recv);
  }
  */

  if(Serial3.available()){
    Serial.write(Serial3.read());
    Serial.write("\n");
  }

  if(Serial.available()){
    Serial3.write(Serial.read());
  }

}
