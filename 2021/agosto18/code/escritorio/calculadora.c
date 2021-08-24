#include <stdio.h>
#include "biblioteca.h"

int main(void)
{

  float num1, num2, resultado;
  printf("Calculadora aburrida con una sola operación - Dividir\n");

  printf("Ingrese el primer número: ");
  scanf("%f", &num1);

  printf("Ingrese el segundo número: ");
  scanf("%f", &num2);

  resultado = dividir(num1, num2);
  printf("El resultado es: %f\n", resultado);

  return 0;
}


