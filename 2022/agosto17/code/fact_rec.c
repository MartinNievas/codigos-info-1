#include <stdio.h>

int fact(int num){

  if(num > 1)
    return num * fact(num-1) ;
  else
    return 1;
}

int main(void)
{
  int num = 5;
  int factorial;

  factorial = fact(num);

  printf("factorial %d!: %d\n", num, factorial);

  return 0;
}

