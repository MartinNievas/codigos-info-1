#include <stdio.h>
#define TAM 4

int main(void) {

  int arreglo_a[TAM];
  int arreglo_b[TAM];

  for (int i = 0; i < TAM; i++){
    arreglo_a[i] = i;
  }

  for (int i = 0; i < TAM; i++){
    arreglo_b[i] = arreglo_a[i] * 2 + 10;
  }

  for (int i = 0; i < TAM; i++){
    printf("a[%d]: %d ", i, arreglo_a[i]);
    printf("b[%d]: %d\n", i, arreglo_b[i]);
  }


  return 0;
}
