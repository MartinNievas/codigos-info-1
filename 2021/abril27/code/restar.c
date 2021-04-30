#include <stdio.h>

int main(void) {

  int numero_1;
  int numero_2;
  int resta;

  printf("Ingrese el primer número entero: ");
  scanf("%d", &numero_1); // El %d es para leer un entero

  printf("Ingrese el segundo número entero: ");
  scanf("%d", &numero_2);

  resta = numero_1 - numero_2;

  printf("La resta de %d - %d es : %d", numero_1, numero_2, resta);

  return 0;
}
