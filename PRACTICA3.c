/*
  SEMINARIO DE PROGRAMACION DE SISTEMAS EMBEBIDOS D01
  Prof. Jesus Ramos
  Alumnos: Hernandez Salinas Brandon Eduardo
  Codigo: 215509503
  Ejercicio: 3
  Fecha: 
*/


#define HIGH 1
#define LOW 0
#define TIME 500

void configMicro();

void main() {

  unsigned char DISPLAY[10] = {0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x07,0x7f,0x67};
  int i;
  
  configMicro();

  while(HIGH){

    for(i = 0; i < 10; i++){
      PORTC = DISPLAY[i];
      Delay_ms(TIME);
    }

  }
}

void configMicro() {

  ANSEL = LOW;
  ANSELH = LOW;
  C1ON_BIT = LOW;
  C2ON_BIT = LOW;
  
  TRISA = LOW;
  TRISB = LOW;
  TRISC = LOW;
  TRISD = LOW;
  TRISE = LOW;

  PORTA = LOW;
  PORTB = LOW;
  PORTC = LOW;
  PORTD = LOW;
  PORTE = LOW;

}