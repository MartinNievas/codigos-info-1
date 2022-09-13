#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 10

int max_puntero(int* a)
{
  int maximo;

  maximo = *(a);
  for (int i = 1; i < TAM; i++)
    if ( *(a+i) > maximo)
      maximo = *(a+i);

  return maximo;
}

int min_puntero(int* a)
{
  int minimo;
  return minimo;
}

int max_arreglo(int a[])
{
  int maximo;
  return maximo;
}

int min_arreglo(int a[])
{
  int minimo;
  return minimo;
}

int main(void) {

  int arreglo[TAM] = {0};
  srand(time(NULL));

  for (int i = 0; i < TAM; i++)
    arreglo[i] = rand()%100;

  for (int i = 0; i < TAM; i++)
    printf("%d ", arreglo[i]);

  // Buscar el máximo
  printf("El máximo es: %d\n", max_puntero(arreglo));
  // printf("El máximo es: %d\n", max_arreglo(arreglo));

  // Buscar el mínimo
  // printf("El mínimo es: %d\n", min_puntero(arreglo));
  // printf("El mínimo es: %d\n", min_arreglo(arreglo));

  return 0;
}


