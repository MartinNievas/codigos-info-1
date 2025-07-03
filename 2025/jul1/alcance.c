#include <stdio.h>

void incrementar(void){

  int numero;
  printf("numero: %d\n", numero++);
}

int main(void) {

  incrementar();
  incrementar();
  incrementar();

  return 0;
}
