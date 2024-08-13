#include <stdio.h>
#define TAM 5

int main (void){

  int arreglo [TAM];

  for (int i=0; i<TAM; i++){
    printf("Ingrese el elemento [%d]: ", i);
    scanf("%d", &arreglo[i]);
  }

  int max = arreglo[0];
  for(int i = 1; i < TAM; i++){
    if(arreglo[i] > max){
      max=arreglo[i];
    }
  }

  printf("El mayor elemento del arreglo es: %d", max);
  return 0;
