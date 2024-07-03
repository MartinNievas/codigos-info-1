#include <stdio.h>
/** función para sumar */

int suma(int a, int b)
{
  int resultado;

  resultado = a + b;

  return resultado;
}

int main(void) {

  int num1, num2;

  printf("Ingrese el primer número: ");
  scanf("%d", &num1);
  printf("Ingrese el segundo número: ");
  scanf("%d", &num2);

  int res = suma(num1, num2);

  printf("La suma es: %d\n", res);

  return 0;
}
