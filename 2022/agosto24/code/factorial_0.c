#include <stdio.h>

unsigned int factorial(unsigned int);

int main(void) {

  unsigned int num = 20;

  printf("%d! = %u\n", num, factorial(num));

  return 0;
}

unsigned int factorial(unsigned int numero){

  //20! = 1*2*3*4*5*6*7*8*9...
  //5! = 1*2*3*4*5;
  //5! = (1*2*3*4)*5;
  //5! = 4!*5;
  //4! = 1*2*3*4;
  //4! = 3!*4;
  unsigned int num = 1;

  for (int i = 1; i <= numero; i++){
    num = num * i;
  }

  return num;
}
