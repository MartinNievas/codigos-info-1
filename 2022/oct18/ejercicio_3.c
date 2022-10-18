#include <stdio.h>
// Determinar el valor de la máscara para que el número
// flotante se transforme a negativo

typedef union{
  float num_f;
  unsigned int num_u;
}numero_u;

int main(void) {

  numero_u conversor;
  conversor.num_f = 1.123;
  unsigned int mascara;

  printf("num: %f\n", conversor.num_f);
  // float: 1.123
  // 0 01111111 00011111011111001110111
  // s      exp                 mantisa
  // mascara: 1 desplazado 32
  // 1<<31
  // 1000000000000000000000000000000
  mascara = 1<<31;
  // ~ NOT
  // | OR
  // & AND
  // ^ XOR - OR exclusiva

  conversor.num_u^=mascara;
  // conversor.num_u&=mascara;
  // conversor.num_u = conversor.num_u | mascara;

  printf("num luego de aplicar la máscara: %f\n", conversor.num_f);

  return 0;
}
