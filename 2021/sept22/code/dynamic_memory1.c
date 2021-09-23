#include <stdio.h>
#include <stdlib.h>
#define TAM 100
// Quien pide uno pide TAM

int main(void)
{

  int *parreglo;
  int tam;

  do {
    printf("Ingrese el tam: ");
    scanf("%d", &tam);
  } while (tam < 0 || tam > TAM);

  parreglo = malloc(sizeof(int) * tam);

  *(parreglo+3) = 10;

  printf("%d\n", parreglo[3]);

  return 0;
}
