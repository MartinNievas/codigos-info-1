#include <stdio.h>
#define TAM 100

int main(void) {

  int arreglo[TAM];

  for (i = 0; i < TAM; i++){
    validar_positividad(&arreglo[i]);
  }

  for (i = 0; i < TAM; i++){
    for (j = 0; j < TAM-1; j++){
      if (/* condition */){
        swap(&arreglo[j], &arreglo[j+1]);
      }
    }
  }

  return 0;
}
