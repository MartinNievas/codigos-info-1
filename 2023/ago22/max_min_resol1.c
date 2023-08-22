#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#define TAM 4

int main(void) {

  int arreglo[TAM];
  int i, max , min;

  srand (time (NULL));

  for(i = 0 ; i < TAM ; i++){
    arreglo [i] = rand() % 10001;
  }
  printf("Desordenado:\n");
  for(i = 0 ; i < TAM ; i++){
    printf("%d\n", arreglo[i]);
  }

  max = arreglo[0];
  min = arreglo [0];

  for ( i = 1 ; i < TAM ; i++){

    if(arreglo[i] > max){
      max = arreglo [i];
    }
    if (arreglo [i] < min){
      min = arreglo [i];
    }
  }
  printf("El numero mayor del arreglo es: %d\n" , max);
  printf("El numero menor del arreglo es: %d\n" , min);
  return 0;
}

