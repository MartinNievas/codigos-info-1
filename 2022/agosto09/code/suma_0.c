#include <stdio.h>

float suma(float a, float b)
{
  float resultado;

  resultado = a + b;

  return resultado;
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
