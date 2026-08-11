#include <stdio.h>

int main(void) {

  int num;

  do{
    printf("Ingresar un número positivo: ");
    scanf("%d", &num);
  }while(num < 0);

  return 0;
}
