#include <stdio.h>
#define TAM 3

int main(void)
{
  int i, tam;
  int arreglo[TAM];

  printf("Ingrese la cantidad de elementos a usar: ");
  scanf("%d", &tam);

  for (i = 0; i < tam; i++)
  { 
    printf("Igrese: ");
    scanf("%d", &arreglo[i]);
  }

  for (i = 0; i < tam; i++)
    printf("%d", arreglo[i]);

  return 0;
}
