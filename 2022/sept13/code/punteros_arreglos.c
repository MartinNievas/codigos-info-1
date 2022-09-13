#include <stdio.h>
#define TAM 10
// Aritmética de punteros

void incrementar_enteros(int *);

int main(void) {

  int arreglo_1[TAM] = {0};
  int *pArreglo1;

  return 0;
}

void incrementar_enteros(int *a, int tam){

  for(int i; i < tam ; i ++)
    a[i]++;

}

