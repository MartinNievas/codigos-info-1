#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 10
/** Transponer el siguiente arreglo bidimensional */

int main(void) {

  int matriz[TAM][TAM];
  srand(time(NULL));

  for (int i = 0; i < TAM; i++)
    for (int j = 0; j < TAM; j++)
      matriz[i][j] = rand() % 1000;

  for (int i = 0; i < TAM; i++){
    for (int j = 0; j < TAM; j++)
      printf("%3d ", matriz[i][j]);
    printf("\n");
  }

  // Transponer
  printf("Luego de transponer:\n");
  for (int i = 0; i < TAM; i++){
    for (int j = i; j < TAM; j++){
      int temp;
      temp = matriz[i][j];
      matriz[i][j] = matriz[j][i];
      matriz[j][i] = temp;
    }
  }

  // Imprimir transpuesta
  printf("Luego de transponer:\n");
  for (int i = 0; i < TAM; i++){
    for (int j = 0; j < TAM; j++)
      printf("%3d ", matriz[i][j]);
    printf("\n");
  }

  return 0;
}
