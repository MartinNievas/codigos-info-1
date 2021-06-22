#include <stdio.h>
#define FILAS 3
#define COLS 4

int main(void) {

  float A[FILAS][COLS];
  float B[FILAS][COLS];
  float C[FILAS][COLS];

  for (int i = 0; i < FILAS; i++)
    for (int j = 0; j < COLS; j++)
      A[i][j] = (i*FILAS + j);

  for (int i = 0; i < FILAS; i++)
    for (int j = 0; j < COLS; j++)
      B[i][j] = 1.;

  for (int i = 0; i < FILAS; i++)
    for (int j = 0; j < COLS; j++)
      C[i][j] = A[i][j] + B[i][j];

  printf("\nMatriz A\n");
  for (int i = 0; i < FILAS; i++){
    for (int j = 0; j < COLS; j++){
      printf("%.2f ", A[i][j]);
    }
    printf("\n");
  }

  printf("\nMatriz B\n");
  for (int i = 0; i < FILAS; i++){
    for (int j = 0; j < COLS; j++){
      printf("%.2f ", B[i][j]);
    }
    printf("\n");
  }

  printf("\nMatriz C\n");
  for (int i = 0; i < FILAS; i++){
    for (int j = 0; j < COLS; j++){
      printf("%.2f ", C[i][j]);
    }
    printf("\n");
  }

  return 0;
}
