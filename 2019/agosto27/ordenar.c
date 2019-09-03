#include <stdio.h>
#include <stdlib.h>

#define TAM 10
int main(void)
{
  int arreglo[TAM];
  /** int arreglo[TAM] = { 10, 0, 0, 0, 0, 0, 0, 0, 0, 0}; */

  int i,j,k;
  int temp;
  int contc = 0;
  int contp = 0;

  for (i = 0; i < TAM; i++)
    arreglo[i] = TAM -i ;

  printf("Antes:\n");
  for (i = 0; i < TAM; i++)
    printf("%d\n", arreglo[i]);

  for (i = 0; i < TAM; i++)
  {
    for (j = 0; j < TAM-1; j++)
    {
      contc++;
      if (arreglo[j] > arreglo[j+1]) 
      {
        contp++;
        temp = arreglo[j];
        arreglo[j] = arreglo[j+1];
        arreglo[j+1] = temp;
      }
    }
      printf("----------paso: %d----------\n", i);
      for (k = 0; k < TAM; k++)
        printf("%d\n", arreglo[k]);
  }

  printf("Después:\n");
  for (i = 0; i < TAM; i++)
    printf("%d\n", arreglo[i]);
  printf("Comparaciones: %d\nPermutaciones:%d\n", contc, contp);



  return 0;
}
