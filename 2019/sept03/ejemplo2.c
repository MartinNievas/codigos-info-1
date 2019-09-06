#include <stdio.h>

int main(void)
{
  float *pnum[3];
  int arreglo[30];
  int i;

  for (i = 0; i < 3; i++)
    printf("%p\n", &pnum[i]);

  return 0;
}
