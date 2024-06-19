#include <stdio.h>
#define LUNES 1
#define MARTES 2
#define MIERCOLES 3

int main(void) {

  int numero;

  printf("Ingrese un número entre %d y %d\n", LUNES, MIERCOLES);
  scanf("%d", &numero);

  switch(numero){
  case LUNES:
    printf("Usted ingresó el 1\n");
  break;
  case MARTES:
  case MIERCOLES:
    printf("Usted ingresó el 2 o el 3\n");
  break;
  default:
    printf("El número ingresado no está entre 1 y 3\n");
  break;
  }

  return 0;
}
