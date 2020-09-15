#include <stdio.h>
#include <stdlib.h>

int main(void)
{

  int *parreglo;

  parreglo = malloc(sizeof(int) * 5);

  *parreglo = 10;
  *(parreglo+1) = 3;
  // *(base+indice) <=> nombre[indice]

  printf("%d\n", parreglo[0]);
  printf("%d\n", *(parreglo+1));
  printf("%d\n", parreglo[2]);

  return 0;
}
