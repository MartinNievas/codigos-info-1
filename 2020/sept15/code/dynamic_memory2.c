#include <stdio.h>
#include <stdlib.h>

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

  /** for (int i = 0; i < tam; i++){ */
    /** printf("%d\n", parreglo[i]); */
  /** } */

  scanf("%d", &tam);

  return 0;
}
