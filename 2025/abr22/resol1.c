#include <stdio.h>

int main(void) {
  int num1;
  int num2;
  int suma;
  int resta;
  int multi;

  printf ("ingrese el primer número: ");
  scanf("%d", &num1);
  printf ("ingrese el segundo numero: ");
  scanf("%d", &num2);

  suma = num1 + num2;
  resta = num1 - num2;
  multi = num1 * num2;

  float div;
  // Casteo de entero a float
  div = num1 / (float) num2;

  printf ("El total es: %d\nLa diferencia es: %d\nEl cociente es: %f\nEl producto es: %d\n", suma, resta, div, multi);
  return 0;
}
