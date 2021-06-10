#include <stdio.h>
#define TAM 100

int main(void)
{

  int arreglo[TAM];
  int i;

  for (int i = 0; i < TAM; i++)
    arreglo[i] = i;

  for (i = 0; i < TAM; i++)
    printf("El elemento[%d] vale: %d\n", i, arreglo[i]);

  return 0;
}
