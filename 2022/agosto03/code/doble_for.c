#include <stdio.h>

int main(void) {

  int i, j, cant_filas = 3, cant_col = 4;

  for (i = 0; i < cant_filas; i++){
    for (j = 0; j < cant_col; j++){
      printf("%4d ", i*cant_col+j);
    }
    printf("\n");
  }

  return 0;
}
