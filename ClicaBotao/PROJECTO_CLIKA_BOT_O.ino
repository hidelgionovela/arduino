void setup() {

  pinMode(13, OUTPUT);
  pinMode(8, INPUT);

}

void loop() {
  
  boolean ler = digitalRead(8);
  if(ler==HIGH){
    digitalWrite(13,HIGH);
  }else{
    digitalWrite(13,LOW);
  }

}
