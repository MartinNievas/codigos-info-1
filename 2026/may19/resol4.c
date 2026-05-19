#include <stdio.h>
int main(void)
{
  int entero;

  printf("Ingrese un numero entero: ");
  scanf("%d", &entero);

  printf("%d", (entero % 15 == 0));

  return 0;
}

