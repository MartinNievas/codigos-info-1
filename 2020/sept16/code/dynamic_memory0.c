#include <stdio.h>
#include <stdlib.h>

int main(void)
{

  int *parreglo;

  // Pedimos memoria para un entero
  parreglo = malloc(sizeof(int));

  *parreglo = 10;

  printf("%d\n", *parreglo);

  return 0;
}
