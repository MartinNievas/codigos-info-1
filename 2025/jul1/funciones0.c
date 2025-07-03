#include <stdio.h>

int sumar(int, int);

int main(void) {
  int res = sumar(5, 3);
  printf("%d\n", res);
  return 0;
}

int sumar(int a, int b)
{
  return a + b;
}
