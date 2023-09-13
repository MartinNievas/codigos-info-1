#include <stdio.h>

int main(void)
{
  int nota;
  int *pnota;
  printf("El tamaño es: %ld\n", sizeof(pnota));
  // Asigno valor a la variable
  nota = 9;

  // Asigno dirección de memoria al puntero
  pnota = &nota;

  printf("pnota es: %p\n", pnota);
  printf("Dir de nota es: %p\n", &nota);

  return 0;
}
