#include <stdio.h>

int incrementar(void)
{
  static int a = 0;

  return ++a;
}

int main(void)
{

  printf("valor: %d\n", incrementar());
  printf("valor: %d\n", incrementar());
  printf("valor: %d\n", incrementar());

  return 0;
}
