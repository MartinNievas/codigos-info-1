#include <stdio.h>
#define N 3

int main(void) {

  int arreglo[N][N];
  int i,j;

  for (i = 0; i < N; i++){
    for (j = 0; j < N; j++){
      printf("Ingrese[%d][%d]: \n", i, j);
      scanf("%d", &arreglo[i][j]);
    }
  }

  for (i = 0; i < N; i++){
    for (j = 0; j < N; j++){
      printf("%d\t", arreglo[i][j]);
    }
    printf("\n");
  }

  return 0;
}
