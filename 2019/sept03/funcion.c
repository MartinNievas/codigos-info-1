#include <stdio.h>

void function1(int a);
void function2(int a);

int main(void)
{

  void (*f1)(int) = {function1};
  void (*f2)(int) = {function2};
  int num = 10;

  (*f1)(num);
  (*f2)(2*num);

  return 0;
}

void function1(int a)
{
  printf("Estamos en la función 1! El valor es: %d\n", a);
}

void function2(int a)
{
  printf("Estamos en la función 2! El valor es: %d\n", a);
}
