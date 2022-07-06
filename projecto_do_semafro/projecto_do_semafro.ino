void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT); // luz vermelha
  pinMode(12,OUTPUT); // luz amarela
  pinMode(11,OUTPUT); // luz verde

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13,HIGH);
  delay(5000);
  digitalWrite(13,LOW);
  
  digitalWrite(11,HIGH);
  delay(4000);
  digitalWrite(11,LOW);

  digitalWrite(12,HIGH);
  delay(2000);
  digitalWrite(12,LOW);
}
