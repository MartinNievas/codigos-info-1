#include <stdio.h>
#include <stdlib.h>
#define TAM 10
// Quien pide uno pide TAM

int main(void)
{

  int* parreglo;
  int tamanio;
  printf("Ingrese el tamaño: ");
  scanf("%d", &tamanio);
  parreglo = malloc(sizeof(int) * tamanio);

  for (int i = 0; i < tamanio; i++){
    *(parreglo+i) = 1;
  }

  return 0;
}
