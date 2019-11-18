#include <stdio.h>
#include "EasyPIO.h"

/** Como utilizar en la raspberry?
Ejecutar los siguientes comandos en la terminal:

gcc -o salida.o ejemplo.c
./salida.o 

*/


int main(void)
{

  pioInit();

  pinMode(31, OUTPUT);


  for (;;)
  {

    /** leer_botones(asd); */
    digitalWrite(31, 0);
    delayMillis(100);
    digitalWrite(31, );
    delayMillis(100);
  }


  return 0;
}
