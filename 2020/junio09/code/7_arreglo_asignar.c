#include <stdio.h>

int main(void)
{
  int arreglo[10];
  int i;
  int valor = 7;

  for (i = 0; i < 10; i++)
    arreglo[i] = valor * i;

  for (i = 0; i < 10; i++)
    printf("%d\n", arreglo[i]);

  /** Que pasa si queremos incrementar el tamaño del arreglo? */
  
  return 0;
}
