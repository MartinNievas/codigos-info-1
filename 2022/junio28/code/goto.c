#include <stdio.h>
// No utilizar

int main(void) {

  printf("Inicio\n");

  INICIO:
  goto FINAL;

  printf("Nudo\n");

  FINAL:

  printf("Final\n");
  goto INICIO;

  return 0;
}
