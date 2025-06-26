#include <stdio.h>

int main(void) {

  int num;

  printf("Ingrese un número: ");
  scanf("%d", &num);
  while(num < 0 || num > 100){
    printf("Ingrese un número: ");
    scanf("%d", &num);
  }

  printf("Su número es: %d\n", num);


  return 0;
}
