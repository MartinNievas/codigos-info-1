#include <stdio.h>

void saludo(void)
{
  int numero;
  printf("Hola!\n");
  printf("Ingrese un número: ");
  scanf("%d", &numero);
  printf("El número ingresado es: %d\n", numero);
}

int main(void)
{
  int numero = 100;
  saludo();
  printf("El número en main es: %d\n", numero);

  return 0;
}
