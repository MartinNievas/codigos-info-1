#include <stdio.h>

void sum(int * p)
{
  p++;
}

int main(void) {

  int matriz[10][10];

  int suma = sum(matriz);

  int *b;
  int **b;
  int b[10];
  int* b[10];
  int (*b)[10];

  return 0;
}
