#include <stdio.h>
#define TAM 10

int main(void) {

  float A[TAM][TAM];
  int i, j;

  for (i = 0; i < TAM; i++)
    for (j = 0; j < TAM; j++)
      A[i][j] = 1.;

  printf("Imprimir la matriz\n");
  for (i = 0; i < TAM; i++){
    for (j = 0; j < TAM; j++)
      printf("%.2f\t", A[i][j]);
    printf("\n");
  }

  float suma = 0;
  // traza de una matriz
  for (i = 0; i < TAM; i++)
    for (j = 0; j < TAM; j++)
      if( i == j)
        suma += A[i][j];

  printf("La suma con if es: %f\n", suma);
  suma = 0;

  for (i = 0; i < TAM; i++)
    suma += A[i][i];

  printf("La suma con un solo for es: %f\n", suma);
  suma = 0;

  i = 0;
  while (i < TAM){
    suma += A[i][i];
    i++;
  }

  printf("La suma con un while es: %f\n", suma);

  return 0;
}
