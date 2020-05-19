#include <stdio.h>

int main(void)
{
  int valor;

  printf("Ingrese un valor: ");
  scanf("%d", &valor);

  if (valor > 10)
    printf("Mayor que 10\n");
  else
    printf("Menor que 10\n");

  return 0;
}
