#include <Wire.h>
#include <hd44780.h>
#include <hd44780_I2Cexp.h>

hd44780_I2Cexp dLcd(0x20,I2Cexp_MCP23008,7,6,5,4,3,2,1,HIGH); //iNSTANCIANDO O ENDERECO DO DISPLAY

void setup() {
  dLcd.begin(16,2);  // entre parentezes o tamanho do display 

}

void loop() {
  dLcd.clear();                         // limpando a tela
  dLcd.setCursor(5,0);                  // indicando a posicao inicial do curso   
  dLcd.print("Stop");                   // imprimindo na tela.
  dLcd.setCursor(2,1);                 // Na segunda linha
  dLcd.print("Corona Virus");
  delay(200);
}
