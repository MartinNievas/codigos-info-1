#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define TAM 10

void inicializar(int*);

int main(void) {

  int arreglo[TAM];
  int *p_arreglo;

  p_arreglo = &arreglo[0];

  srand(time(NULL));

  inicializar(arreglo);
  // "arreglo" <=> &arreglo[0]

  for (int i = 0; i < TAM; i++)
    printf("%d ", arreglo[i]);

  return 0;
}

void inicializar(int *a){
  for (int i = 0; i < TAM; i++)
    // a[i] = rand() % TAM;
    //*(a+i) = rand() % TAM;
    // a[i] <=> *(a+i)
    // i[a] <=> *(i+a)
    i[a] = rand() % TAM;
}

