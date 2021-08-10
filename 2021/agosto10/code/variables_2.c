#include <stdio.h>

void incrementar(int numero)
{
  int valor;

  valor = ++numero;

  printf("%d\n", valor);
}

int main(void) {

  int num = 10;

  incrementar(num);
  incrementar(num);


  return 0;
}
