#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define TAM 10

void ordena(int *, int, void (*mayor_menor)(int *a, int *b));
void swap_menor(int *, int *);
void swap_mayor(int *, int *);

int main(void)
{

  int arreglo[TAM];
  int i, j;

  srand(time(NULL));

  for (i = 0; i < TAM; i++)
    arreglo[i] = rand() % 100;

  for (i = 0; i < TAM; i++)
    printf("%d\n", arreglo[i]);

  ordena(arreglo, TAM, swap_menor);
  printf("Ordenado\n");
  for (i = 0; i < TAM; i++)
    printf("%d\n", arreglo[i]);

  ordena(arreglo, TAM, swap_mayor);
  printf("Ordenado\n");
  for (i = 0; i < TAM; i++)
    printf("%d\n", arreglo[i]);

  return 0;
}

void swap_menor(int *a, int *b)
{
  int temp;
  if (*a < *b){
    temp = *a;
    *a = *b;
    *b = temp;
  }
}

void swap_mayor(int *a, int *b)
{
  int temp;
  if (*a > *b){
    temp = *a;
    *a = *b;
    *b = temp;
  }
}

void ordena(int *a, int tam, void (*mayor_menor)(int *a, int *b))
{
  int i, j;
  for (i = 0; i < tam; i++){
    for (j = 0; j < tam-1; j++){
      mayor_menor(&a[j], &a[j+1]);
    }
  }

}
