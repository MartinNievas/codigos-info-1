#include <stdio.h>

int main(void) {

  int num1 = 10;
  int *pnum1;
  int **ppnum1;

  pnum1 = &num1;
  ppnum1 = &pnum1;

  printf("num1: %d\n", num1);
  printf("pnum1: %d\n", *pnum1);
  printf("ppnum1: %d\n", *(*ppnum1));

  return 0;
}
