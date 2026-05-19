#include <stdio.h>

int main(void)
{
  int num;

  printf("\nIngrese su numero: ");
  scanf(" %d", &num);
  printf("\nRedondeo al proximo multiplo de 10: %d\n", ((num/10)*10)+((num%10)!=0)*10);

  return 0;
}
