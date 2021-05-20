#include <stdio.h>

int main(void) {

  char contador = 0;

  if ( contador ){
    contador = 5;
  } else {
    contador = -5;
  }

  printf("Contador vale: %d\n", contador);

  printf("Fin del programa\n");

  return 0;
}
