#include <stdio.h>
#define TAM 10

int main(void)
{
  int i;
  int arreglo1[TAM];
  // No imprime nada
  // Imprime basura
  // Tira warning
  // --> Error
  int arreglo2[TAM] = {1,2,3,4,5};

  printf(" i\tarreglo1\tarreglo2\n");
  printf("_________________________________\n\n");
  for (i = 0; i < TAM; i++) {
    printf(" %d\t%d\t\t%d\n", i, arreglo1[i], arreglo2[i]);
  }

  return 0;
}
