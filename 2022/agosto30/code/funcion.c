#include <stdio.h>

int func(int a, int b)
{
  int res;

  if (a > b)
    res = a;
  else
    res = b;

  return res;
}


int main(void)
{
  int num1 = 10;
  int num2 = 30;

  /** Llamado a la función */
  printf("%d\n",func(num1,num2));

  return 0;
}
