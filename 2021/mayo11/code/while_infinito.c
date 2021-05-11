#include <stdio.h>

int main(void) {

  int contador = 0;
  int num = 5;

  while (contador < 10){

    contador = contador + 1;
    if (contador == num){
      break;
    }

  }

  printf("contador vale: %d\n", contador);

  return 0;
}
