#include <stdio.h>
// Programa que ordena un arreglo de TAM elementos aleatorios
#include <stdlib.h>
#include <time.h>

#define TAM 1000
// Probar con TAM 100000 para ver que tan rápido es

int main(void)
{

  int arreglo[TAM];
  int i, j;
  int temp;

  srand(time(NULL));

  for (i = 0; i < TAM; i++)
    arreglo[i] = rand();

  // Imprimo los primeros 10 elementos previo al ordenamiento
  printf("Arreglo desordenado\n");
  for (i = 0; i < 10; i++)
    printf("%d\n", arreglo[i]);

  // Algoritmo de ordenamiento Burbuja mejorado
  for (i = 0; i < TAM; i++){
    for (j = 0; j < TAM-1-i; j++){
      if(arreglo[j] > arreglo[j+1]){
        temp = arreglo[j];
        arreglo[j] = arreglo[j+1];
        arreglo[j+1] = temp;
      }
    }
  }

  // Imprimo los primeros 10 elementos luego de ordenarlos
  printf("\nArreglo ordenado\n");
  for (i = 0; i < 10; i++)
    printf("%d\n", arreglo[i]);


  return 0;
}
