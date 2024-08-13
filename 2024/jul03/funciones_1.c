#include <stdio.h>

void saludo(void)
{
  printf("Hola!\n");
}

int main(void)
{
  saludo();
  printf("Ingrese un número: ");
  int num;
  scanf("%d", &num);

  return 0;
}
