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


  printf("num luego de aplicar la máscara: %f\n", conversor.num_f);

  return 0;
}
