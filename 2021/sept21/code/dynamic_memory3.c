#include <stdio.h>
#include <stdlib.h>
#define SIZE 1000

int main(void)
{

  int tam;
  int *parreglo;
  int index;
  int arreglo[SIZE];

  printf("Ingrese el tamaño: ");
  scanf("%lu", &tam);
  parreglo = malloc(tam * sizeof(int));

  printf("Ingrese el índice: ");
  scanf("%d", &index);

  printf("%d\n", parreglo[index]);

  scanf("%d", &tam);

  return 0;
}
