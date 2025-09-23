#include <stdio.h>
#include <stdlib.h>
#define TAM 10

int main(void) {

  int *parreglo;

  parreglo = malloc(TAM * sizeof(int));


  for (int i = 0; i < TAM; i++){
    parreglo[i] = i;
  }

  for (int i = 0; i < TAM; i++){
    printf("%d\n", parreglo[i]);
  }

  free(parreglo);

  return 0;
}
