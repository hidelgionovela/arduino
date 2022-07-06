#include <Adafruit_MCP23008.h>
// instanciando o display de sete seguimentos
Adafruit_MCP23008 seteSeguimentos; 
uint8_t numeros[3] = {
   B00111111,
   B00000110,
   B01011011
   
   };

   
void setup() {
  
  seteSeguimentos.begin(0x4);
  for(int x = 0; x<8; x++ ){
    seteSeguimentos.pinMode(x,OUTPUT);}
}

void loop() {
    for(int x = 0; x<3; x++ ){
    seteSeguimentos.writeGPIO(numeros[x]);
    delay(250);
}
  
}
