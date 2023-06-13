#include <stdio.h>
// Compilación condicional
// También le puedo pasar macros en tiempo de compilación
// gcc preprocesador1.c -Wall -std=c99 -DIMPRIMIR && ./a.out


int main(void) {

  printf("Este mensaje se imprime siempre\n");

  #ifdef IMPRIMIR
    printf("Este mensaje depende de #IMPRIMIR\n");
  #endif

  return 0;
}

