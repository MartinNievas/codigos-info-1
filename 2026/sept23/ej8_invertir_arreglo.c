#include <stdio.h>
#define TAM 5

void invertir_arreglo(int *a, int tam)
{
  /* Antes:
  1 2 3 4 5

  Después:
  5 4 3 2 1
  */
}

int main(void) {

  int arreglo[TAM] = {1, 2, 3, 4, 5};

  printf("Antes:\n");
  for (int i = 0; i < TAM; i++)
    printf("%d ", arreglo[i]);

  invertir_arreglo(arreglo, 5);

  printf("\nDespués:\n");
  for (int i = 0; i < TAM; i++)
    printf("%d ", arreglo[i]);

  return 0;
}
