#include <stdio.h>

int main(void) {

  int num;
  int *pnum;


  num = 10;
  pnum = &num;

  printf("%d\n", num);
  printf("%d\n", *pnum);

  printf("%X\n", pnum);


  return 0;
}
