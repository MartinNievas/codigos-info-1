#include <stdio.h>

int suma(int a, int b)
{
  return a+b;
}

int resta(int a, int b)
{
  return a-b;
}

int prod(int a, int b)
{
  return a*b;
}

int main(void) {

  int (*fun[3])(int a, int b) = {suma, resta, prod};
  int op, resultado, num1, num2;

  printf("Ingrese la operación: ");
  scanf("%d", &op);
  printf("Ingrese num1: ");
  scanf("%d", &num1);
  printf("Ingrese num2: ");
  scanf("%d", &num2);

  resultado = fun[op](num1,num2);

  printf("El resultado es: %d\n", resultado);

  return 0;
}
