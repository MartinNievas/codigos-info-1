#include <stdio.h>

int main(void) {

  int numero;

  printf("Ingrese un número entre 1 y 3\n");
  scanf("%d", &numero);


  switch(numero){
  case 1:
    printf("Usted ingresó el 1\n");
  break;
  case 2:
    printf("Usted ingresó el 2\n");
  break;
  case 3:
    printf("Usted ingresó el 3\n");
  break;
  default:
    printf("El número ingresado no está entre 1 y 3\n");
  break;
  }

  return 0;
}
