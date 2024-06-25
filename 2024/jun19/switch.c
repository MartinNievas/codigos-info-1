#include <stdio.h>
#define NUM1 1
#define PALABRA "Hola"

int main(void) {

  int numero;

  printf("%s\n", PALABRA);
  printf("Ingrese un número entre 1 y 3\n");
  scanf("%d", &numero);

  switch(numero){
  case NUM1:
  case 2:
    printf("Usted ingresó el 2 o el 1\n");
  break;
  case 3:
    printf("Usted ingresó el 3\n");
  break;
  default:
    printf("El número ingresado no está entre 1 y 3\n");
  }

  return 0;
}
