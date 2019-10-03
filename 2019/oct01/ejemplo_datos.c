#include <stdio.h>

union numero{
  int x;
  char c[4];
};

int main(void)
{
  union numero valor;

  valor.x = 1231231;
  printf("%d\n", valor.x);
  printf("%d,%d,%d,%d\n", 
      valor.c[0], 
      valor.c[1], 
      valor.c[2], 
      valor.c[3]);


  return 0;
}

