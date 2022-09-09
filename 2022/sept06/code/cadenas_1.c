#include <stdio.h>
// Inicializarla elemento a elemento

int main(void) {

  char nombre[] = "Martin Nievas";

  printf("Hola %s!\n", nombre);

  for (int i = 0; i < sizeof nombre; i++){
    printf("%c - %d\n", nombre[i], nombre[i]);
  }

  return 0;
}
