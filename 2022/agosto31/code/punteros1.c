#include <stdio.h>

int main(void)
{
  int nota;
  int *pnota;

  nota = 9;

  pnota = &nota;

  printf("Dir de nota es: %p\n", &nota);
  printf("pnota es: %p\n", pnota);

  return 0;
}
