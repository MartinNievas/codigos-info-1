#include <stdio.h>
#include <stdlib.h>
#define CANT 512000000

int main(void) {

  int *arreglo;

  arreglo = malloc(CANT * sizeof(int));

  for (int i = 0; i < CANT; i++){
    arreglo[i] = 0;
  }

  int algo;
  scanf("%d", &algo);

  free(arreglo);


  return 0;
}
