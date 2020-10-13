#include <stdio.h>

int main(void) {

  unsigned int a = 43;
  unsigned int b = 37;
  int c = 0;

  c = a & b;
  printf("c: %d\n", c );

  c = a | b;
  printf("c: %d\n", c );

  c = a ^ b;
  printf("c: %d\n", c );

  c = ~a;
  printf("c: %d\n", c );

  c = a << 2;
  printf("c: %d\n", c );

  c = a >> 2;
  printf("c: %d\n", c );

  return 0;
}
