#include <stdio.h>

int main(void) {

  float a = 3.3;
  float *pa;

  pa = &a;
  *pa = 30;
  printf("a:%f\n", a);


  return 0;
}
