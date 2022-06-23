#include <stdio.h>
#define TAM 10

int main(void) {

  int contrasenia = 100;
  char nombre[TAM];

  printf("Ingrese el nombre: ");
  scanf("%s", &nombre[0]);

  printf("%s\n", nombre);
  printf("La contraseña es: %d\n", contrasenia);

  return 0;
}

