#include <stdio.h>
#define TAM 3

void imprime(int a[], int n)
{
  int i;

  for (i = 0; i < n; i++)
    printf("%d\n", a[i]);
}

int main(void)
{
  int arreglo[TAM];
  int i;

  for (i = 0; i < TAM; i++)
  {
    scanf("%d", &arreglo[i]);
  }

  /** imprime(&arreglo[0], TAM); */
  imprime(arreglo, 2);

  return 0;
}
