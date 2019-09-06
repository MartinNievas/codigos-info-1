#include <stdio.h>

void function1(int);

int main(void)
{
  int   *pnum;
  void (*f)(int) = {function1};
  int num = 10;
  
  /** *pnum = 10; */
  (*f)(num);

  return 0;
}

void function1(int a)
{
  printf("Estamos en la función 1! El valor es: %d", a);
}
