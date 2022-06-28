#include <stdio.h>
#define TAM 3

int main(void) {

  int imagen[TAM][TAM][TAM];
  int i, j, k;


  for (i = 0; i < TAM; i++)
    for (j = 0; j < TAM; j++)
      for (k = 0; k < TAM; k++)
        imagen[i][j][k] = i*TAM*TAM+j*TAM+k;

  for (i = 0; i < TAM; i++)
    for (j = 0; j < TAM; j++)
      for (k = 0; k < TAM; k++){
        /** printf("i:%d j:%d k:%d\n", i, j, k); */
        printf("%d\n", imagen[i][j][k]);
      }


  return 0;
}
