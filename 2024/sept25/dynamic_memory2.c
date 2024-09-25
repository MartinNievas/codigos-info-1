#include <stdio.h>
#include <stdlib.h>
// Ver dentro del container que hay menos ruido

int main(void)
{

  int tam;
  int *parreglo;

  printf("Ingrese el tamaño: ");
  scanf("%d", &tam);

  parreglo = malloc(tam * sizeof(int));

  for (int i = 0; i < tam; i++){
    parreglo[i] = i;
  }

  printf("Fin\n");
  scanf("%d", &tam);

  free(parreglo);

  return 0;
}
