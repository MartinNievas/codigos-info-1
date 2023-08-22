#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 5

int main(void) {

  int arreglo[TAM], i, j;
  srand(time(NULL)); // Inicializo la semilla para números aleatorios

  // Inicializa los elementos del arreglo con números aleatorios
  for (i = 0; i < TAM; i++){
    arreglo[i] = rand() % 1001; // Número aleatorio entre 0 y 1000
  }

  // Imprime el arreglo
  printf("Arreglo desordenado:\n");
  for (i = 0; i < TAM; i++){
    printf("%d\n", arreglo[i]);
  }

  int temp;

  // Ordena el arreglo de mayor a menor
  for (i = 0; i < TAM-1; i++){
    for (j = i; j < TAM; j++){
      if (arreglo[j] > arreglo[i]){
        temp = arreglo[i];
        arreglo[i] = arreglo[j];
        arreglo[j] = temp;
      }
    }
  }

  // Imprime el arreglo
  printf("Arreglo ordenado:\n");
  for (i = 0; i < TAM; i++){
    printf("%d\n", arreglo[i]);
  }

  return 0;
}
