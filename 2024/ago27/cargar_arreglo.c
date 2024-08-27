#include <stdio.h>
#define TAM 100

int main(void) {

  int arreglo[TAM] = {1,3,4,6,7};

  for (int i = 0; i < TAM; i++){
    printf("Arreglo: %d\n", arreglo[i]);
  }

  return 0;
}
