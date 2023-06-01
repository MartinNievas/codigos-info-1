#include <stdio.h>

int main(void) {

  int contador = 10;

  while (contador > 1){
    printf("Es verdadero! %d\n", contador);
    contador = contador - 1;
  }

  return 0;
}
