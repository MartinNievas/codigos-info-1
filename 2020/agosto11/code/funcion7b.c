#include <stdio.h>

int incrementar(void)
{
  int a = 0;

  return ++a;
}

int main(void)
{

  printf("valor: %d\n", incrementar());
  printf("valor: %d\n", incrementar());
  printf("valor: %d\n", incrementar());
  
  return 0;
}
