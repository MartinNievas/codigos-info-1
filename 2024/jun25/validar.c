#include <stdio.h>
/** Validar el ingreso del DNI */

int main(void) {

  int dni;

  do {
    printf("Ingrese su DNI: ");
    scanf("%d", &dni);

    if (dni < 0){
      printf("El DNI tiene que ser positivo\n");
    }

  } while (dni < 0);

  printf("El DNI es: %d\n", dni);

  return 0;
}
