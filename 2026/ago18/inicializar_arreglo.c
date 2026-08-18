#include <stdio.h>
#define TAM 100

int main(void) {

  int arreglo[TAM] = {0};

  // Inicializar para número pares {2,4,6,8,....}
  int num = 2;
  for (int i = 0; i < TAM; i++){
    arreglo[i] = (i+1) * 2;
    arreglo[i] = num;
    num+=2;
  }

  // Imprimir
  for (int i = 0; i < TAM; i++){
    printf("[%d]: %d \n", i, arreglo[i]);
  }


  return 0;
}
