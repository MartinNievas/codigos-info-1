#include <stdio.h>

int cuadrado(int *n)
{
  *n *= *n;
  return *n;
}

int main(void)
{
  int num;

  num = 4;

  printf("El valor de num es: %d\n", num);
  printf("%d al cuadrado es: %d\n", num, cuadrado(num));
  printf("El valor de num es: %d\n", num);


// Se rompe ¬¬
  return 0;
}
