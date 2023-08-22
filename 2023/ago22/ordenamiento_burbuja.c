#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 20

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

  // Ordena el arreglo mediante método burbuja
  int temp;
  for (i = 0; i < TAM; i++){
    for (j = 0; j < TAM-1; j++){
      if (arreglo[j] > arreglo[j+1]){
        temp = arreglo[j];
        arreglo[j] = arreglo[j+1];
        arreglo[j+1] = temp;
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
