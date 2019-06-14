#include <stdio.h>

int main(void)
{
  int i;
  int n;

  printf("Ingrese el número \"n\": ");
  scanf("%d", &n);

  for (i = 1; i < 11; i++)
  {
    printf("%d * %d = %d \n", i, n, i*n);
  }
  return 0;
}
