#include <stdio.h>

int main(void) {

  // metros a centímetros
  // horas a minutos
  // días a horas
  float metros;
  printf("Ingres los metros: ");
  scanf("%f", &metros);

  printf("%f [m] ==> %f [cm]\n", metros, metros * 100);

  return 0;
}
