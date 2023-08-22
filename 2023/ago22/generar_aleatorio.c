#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 100

int main(void) {

  srand(time(NULL));

  int arreglo[TAM];

  for (int i = 0; i < TAM; i++)
    arreglo[i] = rand() % 1001;

  /** for (int i = 0; i < TAM; i++) */
  /**   printf("%d\n", arreglo[i]); */

  return 0;
}
