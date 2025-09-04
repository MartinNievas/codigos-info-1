#include <stdio.h>
// Que pasa con los espacios?

int main(void) {

  char nombre[10];

  printf("Ingrese su nombre: ");
  scanf("%s", nombre);

  printf("Hola %s!\n", nombre);

  return 0;
}
