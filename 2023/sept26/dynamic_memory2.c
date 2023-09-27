#include <stdio.h>
#include <stdlib.h>
// Ver dentro del container que hay menos ruido

int main(void)
{

  int tam;
  int *parreglo;

  do{
    printf("Ingrese el tamaño: ");
    scanf("%d", &tam);
  }while(tam <= 0);

  parreglo = malloc(tam * sizeof(int));

  for (int i = 0; i < tam; i++){
    parreglo[i] = i;
  }

  scanf("%d", &tam);

  return 0;
}
