#include <stdio.h>

int main(void) {

  printf("Inicio\n");
  goto FIN;
  INICIO:
  printf("Nudo\n");
  FIN:
  printf("Fin\n");
  goto INICIO;

  return 0;
}
