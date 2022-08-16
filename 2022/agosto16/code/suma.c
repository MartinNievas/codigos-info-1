#include <stdio.h>

// snake_case
int suma_de_dos_numeros(int a, int b)
{
  return a+b;
}
// UpperCamelCase
int SumaDeDosNumeros(int a, int b)
{
  return a+b;
}
// lowerCamelCase
int sumaDeDosNumeros(int a, int b)
{
  return a+b;
}

int main(void) {

  int num1 = 100;
  int num2 = 200, resultado;
  resultado = suma(num1, num2);

  printf("La suma es: %d\n", resultado);

  return 0;
}
