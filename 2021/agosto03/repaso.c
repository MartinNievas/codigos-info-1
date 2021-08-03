#include <stdio.h>
#define FILAS 3
#define COLS 4

// 0xAB32 -> 1010101100110010

int main(void) {

  float matriz[FILAS][COLS];

  for (int i = 0; i < FILAS; i++){
    for (int j = 0; j < COLS; j++){
      printf("Ingrese el elemento[%d][%d]: ", i, j);
      scanf("%f", &matriz[i][j]);
    }
  }

  float temp;
  // El elemento a_00 -> 1
  temp  = matriz[0][0];

  // Dividir la fila por un número
  for (int i = 0; i < COLS; i++){
    matriz[0][i] = matriz[0][i] / temp;
  }

  for (int i = 1; i < FILAS; i++){
    matriz[i][0] = matriz[i][0] - matriz[0][0] * matriz[i][0];
  }

  // Dividir la fila por un número
  temp = matriz[1][1];
  for (int i = 0; i < COLS; i++){
    matriz[1][i] = matriz[1][i] / temp;
  }

  matriz[0][1] = matriz[0][1] - matriz[1][1] * matriz[0][1];
  matriz[2][1] = matriz[2][1] - matriz[1][1] * matriz[2][1];

  for (int i = 0; i < FILAS; i++){
    for (int j = 0; j < COLS; j++){
      printf("%f ", matriz[i][j]);
    }
    printf("\n");
  }

  return 0;
}
