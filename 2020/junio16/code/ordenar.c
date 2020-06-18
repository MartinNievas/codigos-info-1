#include <stdio.h>
#define TAM 12

int main(void)
{

  int arreglo[TAM];
  int i, j;
  int temp;

  printf("Ingrese los valores del arreglo\n");

  // Ingreso de los elementos en el arreglo
  for (i = 0; i < TAM; i++)
    scanf("%d", &arreglo[i]);

  // Imprimo los elementos previo al ordenamiento
  printf("Arreglo desordenado\n");
  for (i = 0; i < TAM; i++)
    printf("%d ", arreglo[i]);

  int contador_comparaciones = 0;
  // Algoritmo de ordenamiento Burbuja
  for (i = 0; i < TAM; i++){
    for (j = 0; j < TAM-1; j++){

      contador_comparaciones++;
      if(arreglo[j] < arreglo[j+1]){
        temp = arreglo[j];
        arreglo[j] = arreglo[j+1];
        arreglo[j+1] = temp;
      }

    }
  }

  // Imprimo los elementos luego de ordenarlos
  printf("\nArreglo ordenado\n");
  for (i = 0; i < TAM; i++)
    printf("%d ", arreglo[i]);

  printf("\n\nLa cantidad de permutaciones es: %d\n", contador_comparaciones);

  return 0;
}
