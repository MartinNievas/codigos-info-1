#include <stdio.h>
#define TAM 10

void incrementar(int a[], int tam)
{
  for (int i = 0; i < tam; i++)
    a[i]++;
}

int main(void) {

  int arreglo[TAM] = {0};

  for (int i = 0; i < 10; i++)
    printf("%d ", arreglo[i]);

  incrementar(arreglo, 10);
  printf("\n");

  for (int i = 0; i < 10; i++)
    printf("%d ", arreglo[i]);

  return 0;
}
