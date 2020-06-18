#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define TAM 10000


int funcion_de_comparacion (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

int main(void)
{
  int arreglo[TAM];
  int i;

  srand(time(NULL));

  // Inicializo el arreglo con TAM elementos aleatorios
  for (i = 0; i < TAM; i++)
    arreglo[i] = rand();

  printf("Inicio\n");

  qsort(arreglo, TAM, sizeof(int), funcion_de_comparacion);

  printf("Fin\n");

  printf("\nArreglo ordenado\n");
  for (i = 0; i < 10; i++)
    printf("%d\n", arreglo[i]);

  return 0;
}
