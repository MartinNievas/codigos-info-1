#include <stdio.h>
// codeshare.io/info1R1

int main(void) {

  unsigned int num = 0xAAAA;
  unsigned int mascara = 0x1;
  // Corregir para imprimir en órden correcto
  // el número num

  mascara  <<= 1;

  if (num & mascara){
    printf("1");
  } else {
    printf("0");
  }

  return 0;
}
