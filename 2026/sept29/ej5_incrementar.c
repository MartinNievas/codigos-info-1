#include <stdio.h>

/** Completar para que incremente
 * en una unidad el valor de la variable apuntada*/
void incrementar(int *p){
  (*p)++;
}

int main(void) {

  int numero = 10;
  int *pnumero;
  pnumero = &numero;

  incrementar(pnumero);

  printf("numero: %d\n", *pnumero);

  return 0;
}
