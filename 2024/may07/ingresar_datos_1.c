#include <stdio.h>


int main(void) {

  int num1;
  int num2;

  printf("Ingrese el primer número: ");
  scanf("%d", &num1);
  printf("Ingrese el segundo número: ");
  scanf("%d", &num2);
  int suma;

  suma = num1 + num2;

  printf("La suma es: %d\n", suma);

  return 0;
}
