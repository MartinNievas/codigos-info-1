#include <stdio.h>

int main(void) {

  int contador = 0;

  while (contador < 10){

    if (contador > 2){
      printf("contador: %d\n", contador);
    }
    contador += 1;
  }

  return 0;
}
