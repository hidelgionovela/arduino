boolean estado = LOW;
void setup() {

  pinMode(13, OUTPUT);
  pinMode(8, INPUT);

}

void loop() {

  boolean ler = digitalRead(8);
  if (ler == HIGH) {
    delay(50);
    estado = !estado;
    digitalWrite(13, estado);
  }

}
