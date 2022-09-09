#include <stdio.h>

int main(void)
{
  float nota;
  float *pnota;

  nota = 9;

  pnota = &nota;

  printf("El valor de nota es: %f\n", nota);
  printf("Contenido de *pnota: %f\n",*pnota);

  return 0;
}
