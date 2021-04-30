#include <stdio.h>

int main(void) {

  int numero_1;
  int numero_2;
  int suma;

  printf("Ingrese el primer número entero: ");
  scanf("%d", &numero_1); // El %d es para leer un entero

  printf("Ingrese el segundo número entero: ");
  scanf("%d", &numero_2);

  // a + b = c
  // numero_1 + numero_2 = suma; // Esto está mal

  suma = numero_1 + numero_2;    // Esta es la versión correcta

  printf("La de %d + %d es : %d", numero_1, numero_2, suma);

  return 0;
}
