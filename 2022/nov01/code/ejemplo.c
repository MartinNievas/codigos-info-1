#include <stdio.h>

int main(void) {

  char nombre[20] = {0};
  char apellido[20] = {0};

  printf("Ingrese el nombre:");
  scanf("%s%s", nombre, apellido);

  printf("%s %s\n", nombre, apellido);

  return 0;
}
