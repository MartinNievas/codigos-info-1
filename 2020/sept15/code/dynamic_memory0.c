#include <stdio.h>
#include <stdlib.h>
#define TAM 100

int main(void)
{

  int *parreglo;

  parreglo = malloc(5 * sizeof(int));

  *parreglo = 10;

  printf("%d\n", *parreglo);

  return 0;
}
