#include <stdio.h>

int main(void) {

  int num1 = 20, num2 = 20;

  if ( num1 > num2 )
  {
    printf("num1 es mayor que num2\n");
  }
  else
  {
    if (num2 > num1)
    {
      printf("num2 es mayor que num1\n");
    }
    else
    {
      printf("Los números son iguales\n");
    }
  }

  return 0;
}
