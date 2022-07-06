void setup() {
  // configuracoes do projecto
pinMode(13,OUTPUT); 

}

void loop() {
 digitalWrite(13,HIGH);       //ligando a led
 delay(1000);                 // esperando um segundo
 digitalWrite(13,LOW);        // desligando a led
 delay(1000);                 // esperando um segundo
}
