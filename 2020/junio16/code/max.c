#include <stdio.h>
// Programa que busca el máximo y minimo de un arreglo
// de TAM elementos
#define TAM 12

int main(void)
{

  int arreglo[TAM];
  int i;
  int maximo;
  int minimo;

  printf("Ingrese los valores del arreglo\n");

  for (i = 0; i < TAM; i++)
    scanf("%d", &arreglo[i]);

  maximo = arreglo[0];
  minimo = arreglo[0];
  for (i = 0; i < TAM; i++){

    if (arreglo[i] > maximo){
      maximo = arreglo[i];
    }

    if (arreglo[i] < minimo){
      minimo = arreglo[i];
    }

  }

  printf("El máximo es:%d ", maximo);
  printf("El mínimo es:%d ", minimo);


  return 0;
}

