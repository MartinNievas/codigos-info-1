#include <stdio.h>
#define FILAS 3
#define COLS 4

int main(void) {

  // row major
  int matrix[FILAS][COLS]= {
      {0, 1, 2, 3} ,
      {4, 5, 6, 7} ,
      {8, 9, 10, 11}
  };

  int i, j;
  // recorrer las filas
  for (i = 0; i < FILAS ; i++){
    // recorrer las columnas
    for (j = 0; j < COLS ; j++)
      printf("%d ", matrix[i][j]);
    printf("\n");
  }



  return 0;
}
