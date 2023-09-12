#include <stdio.h>

int main(void)
{
  int nota;
  int *pnota;

  // Asigno valor a la variable
  nota = 9;

  // Asigno dirección de memoria al puntero
  pnota = &nota;

  printf("Dir de nota es: %p\n", &nota);
  printf("pnota es: %p\n", pnota);

  return 0;
}
