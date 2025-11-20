#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 10000l

void inicializar_arreglo(int *a, int tam){

  printf("\n Inicializando con números aleatorios\n");
  // Completar

}

int main(void){

  int arreglo[TAM];
  int tam, i , j, temp;


  tam = TAM;
  printf("%ld elementos\n", TAM);

  inicializar_arreglo(arreglo, TAM);
  // Imprimir desordenado
  // Completar
  srand(time(NULL));

  // Ordenamiento burbuja
  // Ordenar de menor a mayor
  // Completar
  for (i= 0; i < tam; i++ ){
    for (j = 0; j < tam -1 -i; j ++){
      // Completar
      }
    }
  }

  printf ("\nArreglo ordenado\n") ;
  // Imprimir ordenado
  // Completar

  return 0;

}

