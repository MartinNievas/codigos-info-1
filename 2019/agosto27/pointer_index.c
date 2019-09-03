#include <stdio.h>
#include <stdlib.h>
#define TAM 10

void swap(int *, int*);
void ordenar(int *, int);

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

  ordenar(arreglo,TAM);

  printf("Después:\n");
  for (i = 0; i < TAM; i++)
    printf("%d\n", arreglo[i]);

  printf("Comparaciones: %d\nPermutaciones:%d\n", contc, contp);

  return 0;
}

void swap(int *a, int*b){
  
  int temp;
  
  temp = *a;
  *b = *a;
  *a = temp;

}

void ordenar(int *a, int tam){
  int i, j;

  for (i = 0; i < tam; i++)
  {
    for (j = 0; j < tam-1; j++)
    {
      if (*(a+j) > *(a+j+1)) 
      {
        swap(?:);
      }
    }
  }



}
