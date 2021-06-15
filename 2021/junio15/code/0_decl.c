#include <stdio.h>
#define SIZE 10

int main(void)
{

  // Tamaño del arreglo es cte
  float arreglo[SIZE];
  int i;

  for ( i = 0; i < SIZE; i++)
    arreglo[i] = 1.0/i;

  for (i = 0; i < SIZE; i++)
    printf("El elemento[%d] vale: %f\n", i, arreglo[i]);

  return 0;
}
