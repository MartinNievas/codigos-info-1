#include <stdio.h>
#define TAM 3

int main(void) {

  int arreglo[TAM] = {1,33,44};
  int i;

  for (i = 0; i < TAM; i++){
    printf("Elemento %d en dirección: %p\n", i, &arreglo[i]);
  }

  printf("El tamaño es: %ld\n", sizeof arreglo/sizeof(arreglo[0]));

  return 0;
}
