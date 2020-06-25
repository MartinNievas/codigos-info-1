#include <stdio.h>
#define TAM 7

int main(void)
{

  int arreglo[TAM] = {123,513,141,928,7,12,10};
  int temp;

  printf("Antes de buscar el máximo\n");
  for (int j = 0; j < TAM; j++){
    printf("%d\n", arreglo[j]);
  }

  // Busco el máximo con una sola iteración del método burbuja
  for (int j = 0; j < TAM-1; j++){

    if ( arreglo[j] > arreglo[j+1]){
      temp = arreglo[j];
      arreglo[j] = arreglo[j+1];
      arreglo[j+1] = temp;
    }

  }

  printf("Luego de buscar el máximo\n");
  for (int j = 0; j < TAM; j++){
    printf("%d\n", arreglo[j]);
  }

  // Busco el mínimo con una sola iteración del método burbuja
  // Pero ahora en sentido opuesto
  for (int j = TAM-1; j > 0; j--){

    if ( arreglo[j] < arreglo[j-1]){
      temp = arreglo[j];
      arreglo[j] = arreglo[j-1];
      arreglo[j-1] = temp;
    }

  }

  printf("Luego de buscar el mínimo\n");
  for (int j = 0; j < TAM; j++){
    printf("%d\n", arreglo[j]);
  }

  printf("El máximo quedó al final y es: %d\n", arreglo[TAM-1]);
  printf("El mínimo quedó al principio y es: %d\n", arreglo[0]);

  return 0;
}
