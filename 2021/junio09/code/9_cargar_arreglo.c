#include <stdio.h>
#define TAM 5

int main(void)
{
  int i;
  int peso[TAM];

  for (i = 0; i < TAM; i++)
  {
    printf("Ingrese el peso (%d): ", i);
    scanf("%d", &peso[i]);
  }

  printf("Los pesos ingresados son: ");
  for (i = 0; i < TAM; i++)
    printf("%d\t", peso[i]);

  return 0;
}
