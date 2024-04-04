void setup() {

  int i;
  for(i=11; i<20; i++){
    pinMode(i,OUTPUT);
   }

}

// LED 9개 기준
 void loop(){

  A();
  delay(5000);
  B();
  
  C();
  delay(5000);
  D();

  A();
  delay(4000);
  B();
  
  C();
  delay(4000);
  D();

  A();
  delay(3000);
  B();
  
  C();
  delay(3000);
  D();
  /*
 for(int j=19; j>10; j--){
  digitalWrite(j,HIGH);
    delay(100);                     
  digitalWrite(j, LOW); 
  */

  }

 void A(){
  for(int j=11; j<16; j++){
    digitalWrite(j,HIGH);
    delay(100);                     
    digitalWrite(j, LOW);
  }
 } 

 void B(){
  for(int j=16; j<20; j++){
    digitalWrite(j,HIGH);
    delay(100);                     
    digitalWrite(j, LOW);
  }
 } 

 void C(){
  for(int j=19; j>15; j--){
    digitalWrite(j,HIGH);
    delay(100);                     
    digitalWrite(j, LOW); 
  }
 }

 void D(){
  for(int j=15; j>10; j--){
    digitalWrite(j,HIGH);
    delay(100);                     
    digitalWrite(j, LOW); 
  }
 }

