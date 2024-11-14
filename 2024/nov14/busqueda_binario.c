#include <stdio.h>
/** Para los números aleatorios */
#include <stdlib.h>
#define TAM 10000

int main(void) {

  int arreglo[TAM];

  /** Inicializar el arreglo con número pseudo aleatorios */
  for (int i = 0; i < TAM; i++)
    arreglo[i] = rand() % 1001;

  printf("\n\nImprimir los 10 primeros números desordenados\n");
  for (int i = 0; i < 10; i++){
    printf("%d ", arreglo[i]);
  }

  /** Ordenamos el arreglo */
  for (int i = 0; i < TAM; i++){
    for (int j = 0; j < TAM-1-i; j++){
      if (arreglo[j] < arreglo[j+1]){
        int temp = arreglo[j];
        arreglo[j] = arreglo[j+1];
        arreglo[j+1] = temp;
      }
    }
  }

  printf("\n\nImprimir los 10 primeros números desordenados\n");
  for (int i = 0; i < 10; i++){
    printf("%d ", arreglo[i]);
  }

  int inferior = 0, superior = TAM-1, medio;
  int buscar;

  printf("\n\nIngrese un número a buscar: ");
  scanf("%d", &buscar);
  medio = (inferior + superior)/2;

  /** Búsqueda binaria */
  while (inferior <= superior){
    if (buscar < arreglo[medio]){
      superior = medio - 1;
    } else if (buscar == arreglo[medio]){
      printf("Elemento encontrado en la posición: %d\n", medio);
      break;
    } else{
      inferior = medio + 1;
    }
    medio = (inferior + superior)/2;
  }

  if (inferior > superior){
    printf("El elemento no se encuentra en el arreglo\n");
  }

  return 0;
}
