#include <stdio.h>
#define SUMA 0
#define RESTA 1
#define PRODUCTO 2

int main(void) {

  int op;
  printf("0) Suma\n1) Resta\n2) Producto");
  printf("Ingrese una operación:");
  scanf("%d", &op);

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
