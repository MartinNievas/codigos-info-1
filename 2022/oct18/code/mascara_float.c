#include <stdio.h>

int main(void) {

  float numero = 1.231;
  unsigned int mascara = 0xAA;

  printf("%lu", numero&mascara);


  return 0;
}
