#include <stdio.h>

typedef union {
  float f;
  unsigned int uint;
}float_u;

int main(void) {

  float_u num;

  num.f = 2.5;

  printf("%u\n", num.uint);

  return 0;
}
