#include <stdio.h>
#define TAM 3

int main(void) {

  int arreglo[TAM] = {1,33,44};


  for (int i = 0; i < TAM; i++){
    printf("Elemento %d en dirección: %p\n", i, &arreglo[i]);
  }
  printf("El tamaño del arreglo es: %ld\n",
      sizeof arreglo/sizeof arreglo[0]);

  return 0;
}
