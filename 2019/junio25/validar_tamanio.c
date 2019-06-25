#include <stdio.h>
#define N 10


int main(void)
{
  int tam;
  int arreglo[N];
 
  do {
    printf("Ingrese la cantidad de elementos a cargar [0-%d]: ", N);
    scanf("%d", &tam);
  } while (tam > N || tam < 0);

  printf("%d\n", tam);

  return 0;
}
