#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 100

// Ordenar utilizando insertion sort
int main(void) {
  srand(time(NULL));

  int arreglo_a_ordenar[TAM] = {0};
  int i, j, temp;

  for (i = 0; i < TAM; i++)
    arreglo_a_ordenar[i] = rand()%TAM;

  // Preguntar e insertar en los elementos que todavía no están ordenados
  for (i = 0; i < TAM; i++){
    for (j = i; j < TAM-1; j++){
      if (arreglo_a_ordenar[i] > arreglo_a_ordenar[j]){
        temp = arreglo_a_ordenar[j];
        arreglo_a_ordenar[j+1] = arreglo_a_ordenar[j];
        arreglo_a_ordenar[j+1] = temp;
      }
    }
  }

  printf("Desp de ordenar:\n");
  for (i = 0; i < TAM; i++)
    printf("%d ", arreglo_a_ordenar[i]);

  return 0;
}
