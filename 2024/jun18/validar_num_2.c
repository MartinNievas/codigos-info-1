#include <stdio.h>

int main(void) {

  int numero;


  do {
    printf("Ingrese un número entre 5 y 100: ");
    scanf("%d", &numero);
  } while (numero < 5 || numero > 100);

  printf("Número ingresado: %d\n", numero);

  return 0;
}

