#include <stdio.h>
#define TAM 3

int main(void) {

  int matrix[TAM][TAM];
  int i, j;

  for (i = 0; i < TAM; i++)
    for (j = 0; j < TAM; j++)
      matrix[i][j] = i * TAM + j;

  printf("Imprimir matriz completa\n");

  for (i = 0; i < TAM; i++){
    for (j = 0; j < TAM; j++)
      printf("%d\t", matrix[i][j]);
    printf("\n");
  }

  printf("Imprimir una fila\n");
  for (j = 0; j < TAM + 6 ; j++)
    printf("%d\t", matrix[0][j]);

  return 0;
}
