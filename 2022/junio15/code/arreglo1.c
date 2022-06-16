#include <stdio.h>
#define TAM 100


int main(void) {

  float arreglo[TAM];
  int i;

  for (i = 0; i < TAM; i++){
    printf("Ingrese %d: ", i);
    scanf("%f", &arreglo[i]);
  }

  for (i = 0; i < TAM; i++){
    printf("%f\n", arreglo[i]);
  }

  for (i = 0; i < TAM; i++){
    printf("%f\n", 2*arreglo[i]);
  }

  return 0;
}

