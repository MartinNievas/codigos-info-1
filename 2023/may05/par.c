#include <stdio.h>


int main(void) {

  int num;

  printf("Ingrese el número: ");
  scanf("%d", &num);

  if (num % 2 == 0){
    printf("El número es par\n");
  }

  if (num % 2 != 0){
    printf("El número es impar\n");
  }

  return 0;
}
