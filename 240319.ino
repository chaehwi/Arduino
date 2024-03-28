void setup() {

  int i;
  for(i=11; i<21; i++){
    pinMode(i,OUTPUT);
   }

 /* pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(14, OUTPUT);
  pinMode(15, OUTPUT);
  pinMode(16, OUTPUT);
  pinMode(17, OUTPUT);
  pinMode(18, OUTPUT);
  pinMode(19, OUTPUT);
  pinMode(20, OUTPUT);*/
}

 void loop(){

  int a;
  for(a=11; a<21; a++){
  digitalWrite(a,HIGH);
    delay(100);                     
  digitalWrite(a, LOW);
  
  }
  int j;
 for(j=19; j>10; j--){
  digitalWrite(j,HIGH);
    delay(100);                     
  digitalWrite(j, LOW);  
  }

 /* digitalWrite(11, HIGH); 
  delay(100);                     
  digitalWrite(11, LOW);  

  digitalWrite(12, HIGH); 
  delay(100);                     
  digitalWrite(12, LOW);     

  digitalWrite(13, HIGH); 
  delay(100);                     
  digitalWrite(13, LOW);    

  digitalWrite(14, HIGH); 
  delay(100);                     
  digitalWrite(14, LOW);    

  digitalWrite(15, HIGH); 
  delay(100);                     
  digitalWrite(15, LOW);     

  digitalWrite(16, HIGH); 
  delay(100);                     
  digitalWrite(16, LOW);  

  digitalWrite(17, HIGH); 
  delay(100);                     
  digitalWrite(17, LOW);    

  digitalWrite(18, HIGH); 
  delay(100);                     
  digitalWrite(18, LOW);     

  digitalWrite(19, HIGH); 
  delay(100);                     
  digitalWrite(19, LOW);  

  digitalWrite(20, HIGH); 
  delay(100);                     
  digitalWrite(20, LOW);   

  digitalWrite(19, HIGH); 
  delay(100);                     
  digitalWrite(19, LOW);      

  digitalWrite(18, HIGH); 
  delay(100);                     
  digitalWrite(18, LOW);   

  digitalWrite(17, HIGH); 
  delay(100);                     
  digitalWrite(17, LOW); 

  digitalWrite(16, HIGH); 
  delay(100);                     
  digitalWrite(16, LOW);  

  digitalWrite(15, HIGH); 
  delay(100);                     
  digitalWrite(15, LOW);  

  digitalWrite(14, HIGH); 
  delay(100);                     
  digitalWrite(14, LOW);     

  digitalWrite(13, HIGH); 
  delay(100);                     
  digitalWrite(13, LOW);    

  digitalWrite(12, HIGH); 
  delay(100);                     
  digitalWrite(12, LOW); */   
  

 }


