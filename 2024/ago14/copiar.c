#include <stdio.h>
#define TAM 4

int main(void) {

  int arreglo_a[TAM], arreglo_b[TAM];

  for (int i = 0; i < TAM; i++){
    arreglo_a[i] = i * 2;
  }

  for (int i = 0; i < TAM; i++){
    arreglo_b[i] = arreglo_a[i] + 1;
  }

  for (int i = 0; i < TAM; i++){
    printf("a[%d]: %d, b[%d]: %d\n", i, arreglo_a[i], i, arreglo_b[i]);
  }

  return 0;
}
