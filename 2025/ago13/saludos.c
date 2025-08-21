#include <stdio.h>

void saludo(int a, int b)
{
  printf("Hola! %d %d\n", a, b);
}

int saludo(int a)
{
  printf("Hola! %d\n", a);
  return a;
}

int main(void) {

  saludo(20, 30);
  saludo(10);
  return 0;
}
