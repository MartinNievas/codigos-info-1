#include <stdio.h>


int main(void)
{
  int i,j;
  int filas = 3;
  int columnas = 3;
  
  for (i = 0; i < filas; i++)
  {
    for (j = 0; j < columnas; j++)
    {
      printf("A");
    }
    printf("B\n");
  }

  return 0;
}
