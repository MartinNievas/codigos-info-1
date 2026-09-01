#include <stdio.h>

void saludo(int cont)
{
  cont++;
  if (cont < 100)
    saludo(cont);
  printf("Saludo! %d\n", cont);
}

int main(void) {

  int contador = 0;
  saludo(contador);

  return 0;
}
