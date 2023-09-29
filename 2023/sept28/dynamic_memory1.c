#include <stdio.h>
#include <stdlib.h>
#define TAM 10
// Quien pide uno pide TAM

int main(void)
{

  int* parreglo;
  unsigned long int tamanio;
  printf("Ingrese el tamaño: ");
  scanf("%lu", &tamanio);
  parreglo = malloc((unsigned long int)sizeof(int) * tamanio);


  scanf("%d", &parreglo[0]);


  return 0;
}
