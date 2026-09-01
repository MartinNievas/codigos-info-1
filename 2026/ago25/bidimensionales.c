#include <stdio.h>
#define TAM 3

int main(void) {
  int arreglo[TAM] = {0};
  int matrizA[TAM][TAM] = { {1,}, {0,1}, {0,0,1} };

  //for (int fila = 0; fila < TAM; fila++){
  //  for (int col = 0; col < TAM; col++){
  //    printf("Ingrese num: ");
  //    scanf("%d", &matrizA[fila][col]);
  //  }
  //}

  for (int fila = 0; fila < TAM; fila++){
    for (int col = 0; col < TAM; col++){
      printf("%d ", matrizA[fila][col]);
    }
    printf("\n");
  }



  return 0;
}
