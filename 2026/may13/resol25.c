#include <stdio.h>

int main(void)
{
  int num;

  printf("\nIngrese su Numero:");
  scanf(" %d", &num);
  printf("\nSu valor absoluto es: %d\n", (1 - 2 * (num < 0))*num);

  printf("%d\n", num * ((num > 0) - (num < 0)));

  return 0;
}

