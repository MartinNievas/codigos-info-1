#include <stdio.h>
#define FILAS 3
#define COLS 4

int main(void)
{

  int matriz_rectangular[FILAS][COLS];
  int matriz_cuadrada[COLS][COLS];
  int i, j;

  // [filas][columnas]

  printf("\nMatriz rectangular:\n");
  // Inicializamos la matriz rectangular
  for (i = 0; i < FILAS; i++){
    for (j = 0; j < COLS; j++){
      matriz_rectangular[i][j] = i*COLS+j;
    }
  }

  // Imprimir matriz rectangular
  for (i = 0; i < FILAS; i++){
    for (j = 0; j < COLS; j++){
      printf("%3d", matriz_rectangular[i][j]);
    }
    printf("\n");
  }

  printf("\nMatriz cuadrada:\n");
  // Inicializamos la matriz cuadrada
  for (i = 0; i < COLS; i++){
    for (j = 0; j < COLS; j++){
      matriz_cuadrada[i][j] = i*COLS+j;
    }
  }

  // Imprimir matriz rectangular
  for (i = 0; i < COLS; i++){
    for (j = 0; j < COLS; j++){
      printf("%3d", matriz_cuadrada[j][i]);
    }
    printf("\n");
  }

  return 0;
}
