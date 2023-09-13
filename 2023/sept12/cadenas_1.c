#include <stdio.h>
// Inicializarla elemento a elemento

int main(void) {

  char nombre[] = "Hola, mundo!";
  nombre[4] = '\0';

  printf("Hola %s!\n", nombre);

  return 0;
}
