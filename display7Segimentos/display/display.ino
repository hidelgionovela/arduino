#include <Adafruit_MCP23008.h>
// instanciando o display de sete seguimentos
Adafruit_MCP23008 seteSeguimentos; 
uint8_t numeros[10] = {
   B00111111,
   B00000110,
   B01011011,
   B01001111,
   B01100110,
   B01101101,
   B01111100,
   B00000111,
   B01111111,
   B01100111
   
   
   };

   
void setup() {
  
  seteSeguimentos.begin(0x4);
  for(int x = 0; x<11; x++ ){
    seteSeguimentos.pinMode(x,OUTPUT);}
}

void loop() {
    for(int x = 0; x<11; x++ ){
    seteSeguimentos.writeGPIO(numeros[x]);
    delay(250);
}
  
}
