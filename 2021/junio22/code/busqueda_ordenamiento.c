#include <stdio.h>
#define TAM 10
// Escribir un programa que solicite al usuario ingresar TAM elementos de un arreglos.
// Luego recorrer el arreglo, buscar el mayor elemento e imprimirlo.


int main(void) {

  int valores[TAM];
  int temp;
  int i;

  // Forma alternativa para inicializar todos los valores del arreglo
  for (i = 0; i < TAM; i++)
    valores[i] = 0;

  printf("Ingrese los %d elementos\n", TAM);

  // Carga de elementos
  for (i = 0; i < TAM; i++){
    scanf("%d", &valores[i]);
  }

  int max;
  int min;
  // Buscar max y min

  for (i = 0; i < TAM; i++){
    for (int j = 0; j < TAM-1; j++){
      // menor a mayor
      if (valores[j] > valores[j+1]){
        temp = valores[j];
        valores[j] = valores[j+1];
        valores[j+1] = temp;
      }
    }
  }

  max = valores[TAM-1];
  min = valores[0];

  printf("El máximo es: %d\n", max);
  printf("El mínima es: %d\n", min);

  return 0;
}
