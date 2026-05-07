#include <stdio.h>

int main(void)
{
  char l;
  printf("Ingrese una letra: ");

  l = getchar();

  printf("El codigo ASCII de la letra ingresada es: %d", l);
  return 0;
}
