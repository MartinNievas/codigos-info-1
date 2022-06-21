#include <stdio.h>
#define TAM 10

int main(void) {

  char nombre[TAM];

  printf("Ingrese el nombre: ");
  scanf("%s", &nombre[0]);

  printf("%s\n", nombre);

  return 0;
}

