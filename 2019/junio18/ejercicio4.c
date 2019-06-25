#include <stdio.h>

int main(void)
{
  int i;
  int j;
  int filas;
  int columnas;

  printf("Cantidad de filas: ");
  scanf("%d", &filas);
  printf("Cantidad de columnas: ");
  scanf("%d", &columnas);

  for (i = 0; i < filas; i++)
  {
    for (j = 0; j < columnas; j++)
    {
      printf("%d\t", j + (i * columnas));
    }
    printf("\n");
  }
    
  return 0;
}
