#include <stdio.h>

int fact(int num){

  int factorial = 1;
  int cont;

  for (cont = num; cont >= 1; --cont)
    factorial *= cont;

  return factorial;
}

int main(void)
{
  int num = 3;
  int factorial;

  factorial = fact(num);

  printf("factorial %d!: %d\n", num, factorial);

  return 0;
}
