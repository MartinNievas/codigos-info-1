#include <stdio.h>
#define N 10

int main(void)
{

  int arreglo[N];
  int i;
  int valor = 3;

  for (i = 0; i < N; i++)
    arreglo[i] = valor * i;

  for (i = 0; i < N; i++)
    printf("%d\n", arreglo[i]);

  /** Que pasa si queremos incrementar el tamaño del arreglo? */
  return 0;
}
