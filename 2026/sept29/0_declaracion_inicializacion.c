#include <stdio.h>

int main(void) {

  int num;
  int *pnum;

  num = 20;
  pnum = &num;

  printf("Contenido\n");
  printf("num: %d\n", num);
  printf("*pnum: %d\n",*pnum);

  printf("Dirección\n");
  printf("pnum: %X\n", pnum);
  printf("&num: %X\n", &num);

  return 0;
}
