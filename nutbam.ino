void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
  pinMode(7,INPUT_PULLUP);
  
}

void loop() {
  int nut=digitalRead(7);
  if(nut==HIGH){
    digitalWrite(13,LOW);
    
  }
  else
    digitalWrite(13,HIGH);
  
  // put your main code here, to run repeatedly:

}