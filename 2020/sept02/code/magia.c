#include <stdio.h>

int main(void)
{

  int arreglo[10];
  int *parreglo;

  parreglo = &arreglo[0];

  printf("%p\n", parreglo);
  printf("%p\n", arreglo);
  // &arreglo[0] <=> arreglo

  return 0;
}
