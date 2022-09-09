#include <stdio.h>
#define TAM 10

// autómata
void sumar_dos(int *a, int tam){

  for( int i = 0; i < tam; i++)
    *(a+i) += 2;

}

int main(void) {

  int arreglo[TAM] = {0};

  sumar_dos(&arreglo[0], 100);

  for (int i = 0; i < TAM; i++)
      printf("%d ", arreglo[i]);


  return 0;
}
