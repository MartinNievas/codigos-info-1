#include <stdio.h>


int main(void)
{
  int num1, num2;

  num1 = 10;
  num2 = 20;

  if (num1 > num2) 
  {
    num1 = 2 * num1 + num2;
    num2 = 2 * num2 + num1;
    num1 = num2 - num1;
    num2 = num1 - num2;
  }

  printf("%d\n", num1);
  printf("%d\n", num2);

  return 0;
}
