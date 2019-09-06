#include <stdio.h>


int main(void)
{
  int num1 = 3;
  int num2 = 14;
  int num3 = 15;

  int *pnum1;
  int *pnum2;
  int *pnum3;

  pnum1 = &num1;
  pnum2 = &num2;
  pnum3 = &num3;

  printf("Imprimir las variables\nForma directa:\n");
  printf("num1: %d\nnum2: %d\nnum3: %d\n", num1, num2, num3);
  printf("Forma indirecta:\n");
  printf("*num1: %d\n*num2: %d\n*num3: %d\n", *pnum1, *pnum2, *pnum3);
  printf("------------------------------\n");

  printf("Imprimir las direcciones\nForma 1:\n");
  printf("&num1: %p\n&num2: %p\n&num3: %p\n", &num1, &num2, &num3);
  printf("Forma 2:\n");
  printf("pnum1: %p\npnum2: %p\npnum3: %p\n", pnum1, pnum2, pnum3);




  return 0;
}
