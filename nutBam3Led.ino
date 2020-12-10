void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(7,INPUT_PULLUP);
  
}

void loop() {
  int nut=digitalRead(7);
  int dem=0;
  if(nut==HIGH){
      delay(500);
      if (nut==LOW)dem++;
      if (dem==1){
          digitalWrite(13,LOW);
          digitalWrite(12,LOW);
          digitalWrite(11,HIGH);

      }
      if (dem==2){
          digitalWrite(13,LOW);
          digitalWrite(11,LOW);
          digitalWrite(12,HIGH);

      }
      if (dem==3){
          digitalWrite(11,LOW);
          digitalWrite(12,LOW);
          digitalWrite(13,HIGH);

      }
  }
  if(dem>3)dem==0;
      
      



    
    
  

}