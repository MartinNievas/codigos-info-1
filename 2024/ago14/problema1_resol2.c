//contreras stefani
#include<stdio.h>
#define TAM 5

int main(void) {

  int arreglo[TAM];

  // Cargar los elementos el arreglo
  for(int i = 0; i < TAM; i++){
    printf("Ingrese un numero entero: ");
    scanf("%d", &arreglo[i]);
  }

  // Recorrer el arreglo y buscar el máximo elemento
  //
  //
  int max;
  max = arreglo[0];

  for(int i = 1; i < TAM; i++) {
    if (arreglo[i] >= max) {
      max = arreglo[i];
    }
  }
  printf("El máximo es: %d\n", max);

  return 0;
}
