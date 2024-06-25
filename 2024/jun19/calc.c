#include <stdio.h>


int main(void) {

  char op;

  printf("Ingrse la op: ");
  scanf("%c", &op);

  switch(op){
  case '+':
    printf("Usted ingresó la suma\n");
  break;
  case '-':
    printf("Usted ingresó la resta\n");
  break;
  default:
    printf("Op no válida\n");
  break;
  }

  return 0;
}
