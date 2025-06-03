#include <stdio.h>
#define PRODUCTO '*'

int main(void) {

  char op;

  printf("Ingrese operación: ");
  scanf("%c", &op);

  switch(op){
  case '+':
    printf("Ingresó la suma\n");
  break;
  case '-':
    printf("Ingresó la resta\n");
    break;
  case PRODUCTO:
    printf("Ingresó el producto\n");
    break;
  default:
    printf("No existe esa op\n");
  break;
  }

  return 0;
}
