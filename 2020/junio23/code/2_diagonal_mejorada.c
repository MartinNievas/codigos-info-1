#include <stdio.h>
#define FILAS 3
#define COLS 4

int main(void)
{

  int matriz_cuadrada[COLS][COLS];
  int i, j;

  // [filas][columnas]

  printf("\nMatriz cuadrada, con la diagonal:\n");
  // Inicializamos la matriz cuadrada
  for (i = 0; i < COLS; i++){
    for (j = 0; j < COLS; j++){
      matriz_cuadrada[i][j] = i*COLS+j;
    }
  }

  // Imprimir matriz rectangular
  for (i = 0; i < COLS; i++){
    for (j = 0; j < COLS; j++){
      if (i == j){
        printf("%3d", matriz_cuadrada[i][j]);
      } else {
        printf("%3d", 0);
      }
    }
    printf("\n");
  }

  return 0;
}


