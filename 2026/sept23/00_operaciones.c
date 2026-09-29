#include <stdio.h>

int main(void) {

  int num1, num2;
  int *pnum1,*pnum2;

  num1 = 10;
  num2 = 20;
  pnum1 = &num1;
  pnum2 = &num2;

  printf("num1: %d\tpnum1: %d\n", num1, *pnum1);
  printf("num2: %d\tpnum2: %d\n", num2, *pnum2);

  printf("Suma\n");
  printf("%d\n", num1 + num2);
  printf("%d\n", *pnum1 + *pnum2);

  return 0;
}
