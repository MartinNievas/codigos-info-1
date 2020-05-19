#include <stdio.h>

int main(void)
{
  int valor;

  printf("Ingrese un valor: ");
  scanf("%d", &valor);

  printf("%s que 10\n", valor > 10? "Mayor" : "Menor");

  return 0;
}
