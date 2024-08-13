#include <stdio.h>

int ingresar_opcion(void)
{
  int op;

  printf("1) Suma\n2) Resta\n3) Salir\n");
  printf("Ingrese una opción: ");
  scanf("%d", &op);

  return op;
}

int main(void)
{

  printf("Usted ingresó la opción: %d\n", ingresar_opcion());

  return 0;
}
