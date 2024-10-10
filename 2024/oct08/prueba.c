#include <stdio.h>
#define TAM 1023

int main(void) {

  int a[TAM][TAM] = {0};
  int b[TAM][TAM] = {0};

  for (int i = 0; i < TAM; i++){
    for (int j = 0; j < TAM; j++){
      if (i==j){
        a[i][j] = 1;
        b[i][j] = 1;
      }
    }
  }

  int sum;
  for (int i = 0; i < TAM; i++){
    for (int j = 0; j < TAM; j++){
      sum = 0;
      for (int k = 0; k < TAM; k++){
        sum += b[i][k] * a[k][j];
      }
      b[i][j] = sum;
    }
  }

  printf("Fin\n");
  for (int i = 0; i < 10; i++){
    for (int j = 0; j < 10; j++){
      printf("%d ", b[i][j]);
    }
    printf("\n");
  }
  scanf("%d", &a[0][0]);



  return 0;
}
