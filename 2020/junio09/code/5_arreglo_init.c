#include <stdio.h>

int main(void)
{
  int arreglo1[] = {3,2,3,5,4};
  int arreglo2[5] = {1,2,3,4,5};
  int i;

  printf(" i\tarreglo1\tarreglo2\n");
  printf("_________________________________\n\n");
  for (i = 0; i < 5; i++) {
    printf(" %d\t%d\t\t%d\n", i, arreglo1[i], arreglo2[i]);
  }

  return 0;
}
