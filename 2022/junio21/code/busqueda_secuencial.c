#include <stdio.h>
#define TAM 10
// Escribir un programa que solicite al usuario ingresar TAM elementos de un arreglos.
// Luego recorrer el arreglo, buscar el mayor elemento e imprimirlo.


int main(void) {

  int valores[TAM];
  int i;

  // Forma alternativa para inicializar todos los valores del arreglo
  for (i = 0; i < TAM; i++)
    valores[i] = 0;

  printf("Ingrese los %d elementos\n", TAM);

  // Carga de elementos
  for (i = 0; i < TAM; i++){
    printf("Ingrese el elemento %d: ", i);
    scanf("%d", &valores[i]);
  }

  int max = valores[0];
  int min = valores[0];

  for (i = 1; i < TAM; i++){

    if (valores[i] > max){
      max = valores[i];
    }

    if (valores[i] < min){
      min = valores[i];
    }

  }

  printf("El máximo es: %d\n", max);
  printf("El mínimo es: %d\n", min);

  return 0;
}
