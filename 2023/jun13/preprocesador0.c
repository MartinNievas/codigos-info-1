#include <stdio.h>
// Compilación condicional
// Probar comentar y descomentar la siguiente linea

#define IMPRIMIR
//Probar agregar el #else


int main(void) {

  printf("Este mensaje se imprime siempre\n");

  #ifdef IMPRIMIR
    printf("#IMPRIMIR está definido\n");
  #else
    printf("#IMPRIMIR NO está definido\n");
  #endif

  return 0;
}
