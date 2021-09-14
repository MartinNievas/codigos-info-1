#include <stdio.h>
#define TAM 10
// Ordenar un arreglo de números aleatorios a través de la función ordena

void ordenar(int *, int tam);
void intercambiar(int *);

int main(void) {

  int arreglo[TAM];

  for (int i = 0; i < TAM; i++)
    arreglo[i] = rand() % TAM;

  for (int i = 0; i < TAM; i++)
    printf("%d\n", arreglo[i]);

  ordenar(arreglo, TAM);
  printf("Ordeanado:\n");

  for (int i = 0; i < TAM; i++)
    printf("%d\n", arreglo[i]);

  return 0;
}

void intercambiar(int *a){
  int temp;

  temp = *(a);
  *(a) = *(a+1);
  *(a+1) = temp;

}

// método burbuja
void ordenar(int *a, int tam){

  int temp;
  for (int i = 0; i < tam; i++){
    for (int j = 0; j < tam - 1 ; j++){
      // a[j] < a[j+1]
      if ( *(a+j) < *(a+j+1)){
        intercambiar(a+j);
      }
    }
  }
}

