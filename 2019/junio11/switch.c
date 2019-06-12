#include <stdio.h>
#define GERENTE 1
#define SUELDO_SEMANA 2
#define OPCION_TRES 3

int main(void)
{
  int op;

  printf("Operaciones:\n1: Imprime HOLA\
          \n2: Imprime Ayuda\n3: Salir\n");
  printf("Ingrese una operación: ");
  scanf("%d", &op);

  switch(op)
  {
  case GERENTE:
    printf("HOLA\n");
  break;
  case SUELDO_SEMANA:
    printf("Ayuda\n");
  break;
  case OPCION_TRES:
    printf("Adiós\n");
  break;
  default:
    printf("La opción no es correcta\n");
  break;
  }


  return 0;
}
