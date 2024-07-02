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
  int opcion;

  /* Llamado a la función */
  opcion = ingresar_opcion();
  printf("Usted ingresó la opción: %d\n", opcion);

  opcion = ingresar_opcion();
  printf("Usted ingresó la opción: %d\n", opcion);

  return 0;
}
