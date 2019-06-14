#include <stdio.h>

int main(void)
{
  int i;
  int n;

  printf("Ingrese el número \"n\": ");
  scanf("%d", &n);

  for (i = 0; i <= n; i++)
    if (i%2 == 0) 
      printf("%d ", i);
  
  return 0;
}
