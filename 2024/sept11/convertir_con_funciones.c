#include <stdio.h>

void convertir_a_mayusculas(char *arreglo, int);

int main(void) {

  char nombre[10];

  printf("Ingrese su nombre: ");
  scanf("%s", nombre);

  // Convertir el nombre todo a mayúsculas
  convertir_a_mayusculas(nombre, 10);
  printf("Hola %s!\n", nombre);

  return 0;
}
