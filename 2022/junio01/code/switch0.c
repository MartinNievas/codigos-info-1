#include <stdio.h>

int main(void) {

  int op = 1;

  switch(op){
  case 0:
    printf("Op vale 0\n");
  break;
  case 2:
    printf("Op vale 2\n");
  break;

  default:
    printf("caso default\n");
  break;
  }

  return 0;
}
