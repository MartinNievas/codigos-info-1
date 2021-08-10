#include <stdio.h>

void imprimir(void)
{
  static int valor = 0;

  printf("%d\n", valor++);
}

int main(void) {

  imprimir();

  return 0;
}

