#include <stdio.h>

int main(void) {

  int numero;

  printf("Ingrese un número entre 5 y 100: ");
  scanf("%d", &numero);

  while (numero < 5 || numero > 100){
    printf("Número fuera del rango, intente nuevamente\n");
    printf("Ingrese un número entre 5 y 100: ");
    scanf("%d", &numero);
  }

  printf("Número ingresado: %d\n", numero);

  return 0;
}
