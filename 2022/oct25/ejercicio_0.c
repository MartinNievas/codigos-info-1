#include <stdio.h>
#define TAM 10
/** Transponer el siguiente arreglo bidimensional */

int main(void) {

  int matriz[TAM][TAM];

  for (int i = 0; i < TAM; i++){
    for (int j = 0; j < TAM; j++){
      matriz[i][j] = j+i*TAM+1;
    }
  }

  for (int i = 0; i < TAM; i++){
    for (int j = 0; j < TAM; j++){
      printf("%d\t", matriz[i][j]);
    }
    printf("\n");
  }

  return 0;
}
