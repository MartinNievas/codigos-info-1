#include <stdio.h>

int main(void) {

  int op;

  printf("Ingrese una op:\n");

  scanf("%d", &op);

  switch(op){
  case 0:
    printf("Caso 0\n");
  break;
  case 1:
    printf("Caso 1\n");
  break;
  case 2:
    printf("Caso 2\n");
  break;
  default:
    printf("Default\n");
  break;
  }

  return 0;
}
