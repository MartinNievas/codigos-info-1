#include <stdio.h>

int main(void) {

  int num;

  printf("Ingrese un número: ");
  scanf("%d", &num);

  if (num < 100){
    printf("El número es menor que 100!\n");
  }

  printf("Final\n");

  return 0;
}
