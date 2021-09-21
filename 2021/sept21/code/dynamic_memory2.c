#include <stdio.h>
#include <stdlib.h>
// Ver dentro del container que hay menos ruido

int main(void)
{

  int tam;
  int *parreglo;
  int arreglo[1000];

  printf("Ingrese el tamaño: ");
  scanf("%d", &tam);

  parreglo = malloc(tam * sizeof(int));

  for (int i = 0; i < tam; i++){
    parreglo[i] = i;
  }

  /** for (int i = 0; i < tam; i++){ */
    /** printf("%d\n", parreglo[i]); */
  /** } */

  scanf("%d", &tam);

  return 0;
}
