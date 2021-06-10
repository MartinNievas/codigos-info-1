#include <stdio.h>
#define N 5

int main(void)
{
  int arreglo[N];
  int i;
  int valor = 7;

  for (i = 0; i < N; i++)
    arreglo[i] = valor * i;

  for (i = 0; i < N; i++)
    printf("%d\n", arreglo[i]);

  return 0;
}
