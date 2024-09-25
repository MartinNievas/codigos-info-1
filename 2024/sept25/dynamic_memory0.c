#include <stdio.h>
#include <stdlib.h>
// Memoria para un elemento

int main(void)
{
  int *parreglo;
  // Pedimos memoria para un entero
  parreglo = malloc(1*sizeof(int));

  if(parreglo == NULL){
    printf("ERROR\n");
    return 0;
  }
  *parreglo = 10;

  printf("%d\n", *parreglo);

  return 0;
}
