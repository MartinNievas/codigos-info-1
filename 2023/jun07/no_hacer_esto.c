#include <stdio.h>

int main(void) {

  int var = 1;

  printf("Inicio\n");

  if (var < 10)
goto etiqueta;
    printf("Nudo\n");
etiqueta:

  printf("Fin\n");

  return 0;
}
