#include <stdio.h>
/** función para sumar */

int suma(int a, int b)
{
  int resultado;
  printf("a: %d\n", a);
  printf("b: %d\n", b);

  resultado = a + b;

  return resultado;
}

int main(void) {

  int res = suma(10,30);

  printf("La suma es: %d\n", res);

  return 0;
}
