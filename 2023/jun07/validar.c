#include <stdio.h>

int main(void) {

  int op;
  printf("1. Suma\n");
  printf("2. Resta\n");
  printf("3. Salir\n");

  // Validación de datos
  do{
    printf("Ingrese la operación: ");
    scanf("%d", &op);
  }while( op < 1 || op > 3);

  printf("Todo bien\n");

  return 0;
}
