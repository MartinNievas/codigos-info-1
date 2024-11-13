#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 10000l

void inicializar_arreglo(int *a, int tam){

  printf("\n Inicializando con números aleatorios\n");
  for (int i = 0; i < tam; i++)
    *(a+i) = rand() % 100000;

}

int main(void){

  int arreglo[TAM];
  int tam, i , j, temp;


  tam = TAM;
  printf("%ld elementos\n", TAM);

  inicializar_arreglo(arreglo, TAM);
  for (i= 0; i < tam; i++ ){
    printf ("%d\n", arreglo[i]) ;
  }
  srand(time(NULL));

  for (i= 0; i < tam; i++ ){
    for (j = 0; j < tam -1 -i; j ++){
      if (arreglo [j] < arreglo[j+1]){
        temp = arreglo[j];
        arreglo [j] = arreglo[j+1];
        arreglo[j+1] = temp;
      }
    }
  }

  printf ("\nArreglo ordenado\n") ;
  for (i= 0; i < tam; i++ ){
    printf ("%d\n", arreglo[i]) ;
  }
  // Ordenar de menor a mayor

  return 0;

}

