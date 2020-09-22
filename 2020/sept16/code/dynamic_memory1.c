#include <stdio.h>
#include <stdlib.h>
#define TAM 100

int main(void)
{

  int *parreglo;
  int arreglo[TAM];
  int tam;

  do {
    printf("Ingrese el tam: ");
    scanf("%d", &tam);
  } while (tam < 0 || tam > TAM);

  parreglo = malloc(sizeof(int) * 5);

  *parreglo = 10;
  *(parreglo+1) = 20;
  *(parreglo+2) = 30;
  // *(base+indice) <=> base[indice]

  printf("%d\n", *parreglo);
  // Arreglos
  printf("%d\n", parreglo[1]);
  // Aritmética de punteros
  printf("%d\n", *(parreglo+2));

  return 0;
}
