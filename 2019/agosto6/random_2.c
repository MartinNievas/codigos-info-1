#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int i;
  unsigned int semilla;

  printf("Ingrese el número para la semilla: ");
  scanf("%u", &semilla);

  srand(semilla);

  for (i = 0; i < 10; i++)
  {
    printf("%d\n", rand());
  }

  return 0;
}
