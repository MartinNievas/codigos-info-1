#include <stdio.h>

int main(void) {

  char operacion;

  printf("Ingrese la operación: ");
  scanf("%c", &operacion);

  switch(operacion){
  case '+':
    printf("Suma\n");
  break;
  case '-':
    printf("Resta\n");
  break;
  default:
    printf("No existe\n");
  break;
  }

  return 0;
}
