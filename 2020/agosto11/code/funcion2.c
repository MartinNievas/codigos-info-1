#include <stdio.h>

int max(int a, int b)
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
  printf("%d\n", max(num1,num2));

  return 0;
}
