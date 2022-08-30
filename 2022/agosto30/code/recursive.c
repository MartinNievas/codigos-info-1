#include <stdio.h>

void imprimir(void)
{
  static int a = 0;
  printf("%d\n", a++);

  if( a < 10)
  {
    imprimir();
  }

  printf("Ciclo %d\n", a);
}

int main(void)
{

  imprimir();

  return 0;
}

