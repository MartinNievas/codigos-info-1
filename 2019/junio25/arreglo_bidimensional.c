#include <stdio.h>
#define TAM_1 2
#define TAM_2 2

int main(void)
{
  int arreglo_2D[TAM_1][TAM_2];
  int i, j;

  for (i = 0; i < TAM_1; i++)
  {
    for (j = 0; j < TAM_2; j++)
    {
      printf("Ingrese el elemento[%d][%d]: ",i,j);
      scanf("%d", &arreglo_2D[i][j]);
    }
  }

  printf("El arreglo es: \n");
  for (i = 0; i < TAM_1; i++)
  {
    for (j = 0; j < TAM_2; j++)
    {
      printf("%4d",arreglo_2D[i][j]);
    }
    printf("\n");
  }

  return 0;
}
