#include <stdio.h>

int main(void) {

  int num;

  scanf("%d", &num);

  switch(num){
    case 10:
    case 11:
      printf("Ingresó un 10\n");
      break;
    case -30:
      printf("Ingresó -30\n");
      break;
    default:
      printf("No es ninguno\n");
  }

  return 0;
}
