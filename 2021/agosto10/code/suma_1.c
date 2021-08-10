#include <stdio.h>
// Quitar todas las variables intermedias

float suma(float a, float b)
{
  return a + b;
}

int main(void) {

  float num1, num2, num3;

  printf("Ingrese el primer número: ");
  scanf("%f", &num1);
  printf("Ingrese el segundo número: ");
  scanf("%f", &num2);

  num3 = suma(num1, num2);

  printf("La suma de %f + %f = %f\n", num1, num2, num3);

  return 0;
}
