#include <stdio.h>

void incrementar(int a[], int tam)
{
  for (int i = 0; i < 4; i++)
    a[i]++;
}

int main(void) {

  int arreglo[] = {1,2,3,4};
  int i;

  for (i = 0; i < 4; i++)
    printf("%d ", arreglo[i]);

  incrementar(&arreglo[2], 4);
  printf("\n");

  for (i = 0; i < 4; i++)
    printf("%d ", arreglo[i]);

  return 0;
}
