#include <stdio.h>

int main(void) {

  int num = 100;
  // Para declarar un puntero usamos *
  int *pnum;

  // Asignar dirección de memoria de num en puntero
  pnum = &num;

  printf("%d\n", num);

  return 0;
}
