#include <stdio.h>
#include <stdlib.h>

int main(void)
{

  unsigned long int tam;
  int *parreglo;
  int index;

  printf("Ingrese el tamaño: ");
  scanf("%lu", &tam);
  parreglo = malloc(tam * sizeof(int));

  printf("Ingrese el índice: ");
  scanf("%d", &index);

  printf("%d\n", parreglo[index]);
  scanf("%d", &tam);


  return 0;
}
