#include <stdio.h>

int main(void)
{
  int nota;
  int *pnota;

  nota = 9;

  pnota = &nota;

  printf("El valor de nota es: %d\n", nota);
  printf("Contenido de *pnota: %d\n",*pnota);

  return 0;
}
