#include <stdio.h>
#define SUMA '+'
#define RESTA '-'
#define PRODUCTO '*'

int main(void) {

  char op;
  printf("+) Suma\n-) Resta\n*) Producto");
  printf("Ingrese una operación:");
  scanf("%c", &op);

  switch(op){
    case SUMA:
      printf("Opción suma\n");
      break;
    case RESTA:
      printf("Opción resta\n");
      break;
    case PRODUCTO:
      printf("Opción producto\n");
      break;
    default:
      /*Default*/
      break;
  }

  return 0;
}
