#include <stdio.h>

struct campo {
  unsigned int num: 4;
  int a: 10;
  char b: 40;
};

int main(void) {
  struct campo campo_bits;

  campo_bits.num = -1;

  printf("%u\n", campo_bits.num);

  return 0;
}
