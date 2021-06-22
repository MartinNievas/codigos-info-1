#include <stdio.h>
#define TAM 10
// Escribir un programa que solicite al usuario ingresar TAM elementos de un arreglos.
// Luego recorrer el arreglo, buscar el mayor elemento e imprimirlo.


int main(void) {

  int valores[TAM];
  int temp;
  int i, j;

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

  // Algoritmo de ordenamiento Burbuja
  for (j = TAM-1; j > 0; j--){
    // Menor a mayor
    if (valores[j] < valores[j-1]){
      temp = valores[j];
      valores[j] = valores[j-1];
      valores[j-1] = temp;
    }
  }

  for (j = 0; j < TAM-1; j++){
    // Mayor a menor
    if (valores[j] > valores[j+1]){
      temp = valores[j];
      valores[j] = valores[j+1];
      valores[j+1] = temp;
    }
  }

  printf("--------------\n");
  for (i = 0; i < TAM; i++){
    printf("%d\n", valores[i]);
  }

  printf("El máximo es: %d\n", valores[TAM-1]);
  printf("El mínimo es: %d\n", valores[0]);

  return 0;
}
