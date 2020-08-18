#include <stdio.h>

int incrementar(void)
{
  static int a = 0;

  return ++a;
}

int main(void)
{

  for(int i = 0; i < 10; i++)
    printf("valor: %d\n", incrementar());
  
  return 0;
}
