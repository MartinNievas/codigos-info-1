#include <stdio.h>
// Para correr el programa
// clear && gcc -Wall -std=c99 % && ./a.out

int main(void) {

  int numero1;
  int numero2;
  int suma;
  int resta;
  int mult;
  float div;
  int resto;

  printf("Ingrese el primer número: ");
  scanf("%d", &numero1);

  printf("Ingrese el segundo número: ");
  scanf("%d", &numero2);

  suma = numero1 + numero2;
  printf("La suma es: %d\n", suma);

  resta = numero1 - numero2;
  printf("La resta es: %d\n", resta);

  mult = numero1 * numero2;
  printf("La multiplicación es: %d\n", mult);

  div = numero1 / (double) numero2;
  printf("La división es: %f\n", div);

  resto = numero1 % numero2;
  printf("El resto entre %d y %d es: %d\n", numero1, numero2, resto);

  return 0;
}
