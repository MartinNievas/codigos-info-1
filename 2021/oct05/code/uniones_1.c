#include <stdio.h>

union convertir_u{
  int i;
  float f;
};

int main(void){

  union convertir_u conversor;

  printf("----------Conversor decimal a HEXA----------\n\n");
  printf("Ingrese el valor flotante: ");
  scanf("%f", &conversor.f);

  printf("En hexa: %X\n", conversor.i);

  return 0;
}
