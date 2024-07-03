//Gimenez Bosch
#include <stdio.h>

int ingresar_y_validar_opcion(void)
{
  int op;

  printf("1) Suma\n2) Resta\n3) Salir\n");
  printf("Ingrese una opción: ");
  scanf("%d", &op);
  while(op<1 || op>3){
    printf("La opción ingresada es errónea,
        ingrese nuevamente.");
    scanf("%d", &op);
  }
  return op;
}

int main(void)
{
  int opcion;

  /* Llamado a la función */
  opcion = ingresar_y_validar_opcion()
    printf("Usted ingresó la opción: %d\n", opcion);

  return 0;
}


