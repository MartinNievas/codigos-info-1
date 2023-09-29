#include <stdio.h>

int main(void) {

  float a = 3.3;
  const float b = 2.2;
  float *pa;
  float * pb;

  pa = &a;
  *pa = 30;
  printf("a:%f\n", a);

  pb = &b;
  *pb = 5.5;
  printf("b:%f\n", b);

  return 0;
}
