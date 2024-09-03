#include <stdio.h>
#define TAM 3

int main(void) {

  int a[TAM];
  int b[TAM];
  int acc = 0;

  for(int i=0; i<TAM; i++){
    printf("Ingrese valores del arreglo A [%d]: ", i);
    scanf("%d", &a[i]);
  }

  for(int i=0; i < TAM; i++){
    acc += a[i];
    b[i] = acc;
  }

  for(int i=0; i<TAM; i++){
    printf("\nLos elementos del arreglo B [%d]: %d",i, b[i]);
  }

  return 0;
}

