#include <stdio.h>

int main(void) {

  int a = 100;
  printf("Inicio\n");
  if( a > 10)
    goto fin;
  volver:

  printf("Nudo\n");

  fin:
  printf("Fin\n");
  goto volver;

  return 0;
}
