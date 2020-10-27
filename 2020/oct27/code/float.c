#include <stdio.h>

typedef union {
  float f;
  struct{
    unsigned char signo:1;
    unsigned char mantisa:8;
    unsigned int exponente:23;
  }bytes;
}float_u;

int main(void) {

  float_u num;


  num.f = -2.5;

  printf("%u\n", num.bytes.signo);
  printf("%u\n", num.bytes.mantisa);
  printf("%u\n", num.bytes.exponente);

  return 0;
}
