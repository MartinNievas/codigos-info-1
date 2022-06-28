#include <stdio.h>
#define TAM 10
#define FILAS 10
#define COLS 30

int main(void) {

  char intensity[] = {'@','%','#','*','+','=','-',':','.', ' '};
  char imagen[FILAS][COLS];
  int i, j, index;

  for (i = 0; i < FILAS; i++){
    for (j = 0; j < COLS; j++){
      index = TAM*j/COLS;
      imagen[i][j] = intensity[10-index];
    }
  }

  for (i = 0; i < FILAS; i++){
    for (j = 0; j < COLS; j++)
      printf("%c", imagen[i][j]);
    printf("\n");
  }


  return 0;
}
