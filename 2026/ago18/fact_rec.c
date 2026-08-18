#include <stdio.h>

unsigned int factorial(unsigned int num){

  if( num == 0)
    return 1;

  return num * factorial(num-1);
}

int main(void) {

  unsigned int num, res = 1;

  printf("Ingrese un número: ");
  scanf("%d", &num);

  printf("res: %u\n", factorial(num));

  return 0;
}
