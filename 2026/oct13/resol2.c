#include <stdio.h>

int cuadrado(int n)
{
  return n * n;
}


int doble(int n)
{
  return n * 2;
}


void procesarVector(
    int vector[],
    int cantidad,
    int (*operacion)(int)
    )
{
  int i;

  for (i = 0; i < cantidad; i++)
  {
    printf("%d ", operacion(vector[i]));
  }

  printf("\n");
}

int main(void)
{
  int vector[] = {2, 4, 6, 8, 10};
  int cantidad = 5;

  printf("Cuadrados:\n");

  procesarVector(vector, cantidad, cuadrado);

  printf("Dobles:\n");

  procesarVector(vector, cantidad, doble);

  return 0;
}

