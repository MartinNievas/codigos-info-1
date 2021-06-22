#include <stdio.h>
#define TAM 10

int main(void) {

  int arreglo[TAM] = {2};
  int i;

  // inicializando o asignando todos los valores en 0
  for( i = 0; i < TAM ; i++)
    arreglo[i] = 0;

  // recorrer el arreglo e incrementando 1
  for( i = 0; i < TAM ; i++)
    arreglo[i]++;
    //arreglo[i] = arreglo[i] + 1; // forma alternativa

  // recorrer el arreglo e imprimimos
  for( i = 0; i < TAM ; i++)
    printf("%d ", arreglo[i]);

  return 0;
}
