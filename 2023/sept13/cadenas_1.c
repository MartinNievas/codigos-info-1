#include <stdio.h>
// Inicializarla elemento a elemento

int main(void) {

  char nombre[] = "Hola, mundo!";
  nombre[4] = 0;
  printf("%s\n", nombre);
  nombre[4] = 64;
  printf("%s", nombre);

  return 0;
}
