#include <stdio.h>
#define TAM 10

int main(void) {

  int mi_arreglo[TAM];
  int i;

  for (i = 0; i < TAM; i++)
    mi_arreglo[i] = i;

  for (i = 0; i < TAM; i++)
    printf("arreglo [%d]: %d\n", i, mi_arreglo[i]);

  return 0;
}
