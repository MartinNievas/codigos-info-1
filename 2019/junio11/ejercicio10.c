#include <stdio.h>

int main(void)
{
  int i;
  int m;
  int n;
  unsigned long pot;

  printf("Ingrese el número \"n\": ");
  scanf("%d", &n);
  printf("Ingrese el número \"m\": ");
  scanf("%d", &m);

  pot = n;
  for (i = 0; i < m-1; i++)
  {
    pot *= n;
  }
  
  printf("%d elevado a la %d es :%lu \n", n, m, pot);

  return 0;
}
