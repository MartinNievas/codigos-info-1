#include <stdio.h>
#define TAM 3

int main(void) {

  int a[TAM];
  int b[TAM];

  for(int i=0; i<TAM; i++){
    printf("Ingrese valores del arreglo A [%d]: ", i);
    scanf("%d", &a[i]);
  }

  b[0]=a[0];

  for(int i=1; i < TAM; i++){
    b[i] = b[i-1] + a[i];
  }

  for(int i=0; i<TAM; i++){
    printf("\nLos elementos del arreglo B [%d]: %d",i, b[i]);
  }

  return 0;
}

