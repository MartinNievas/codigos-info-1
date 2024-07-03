//Cipolla Teo
#include <stdio.h>

int ingresar_y_validar_opcion(void)
{
  int op;

  printf("1) Suma\n2) Resta\n3) Salir\n");
  printf("Ingrese una opción: ");
  scanf("%d", &op);
  while(op <= 0|| op >= 4){
    printf("Ingrese una opción Correcta \n");
    printf("1) Suma\n2) Resta\n3) Salir\n");
    printf("Ingrese una opción: ");
    scanf("%d", &op);
  }
  return op;
}

int main(void)
{
  int opcion;

  opcion = ingresar_y_validar_opcion();
  printf("Usted ingresó la opción: %d\n", opcion);

  return 0;
}
