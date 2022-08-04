#include <stdio.h>
// Se puede llamar una función dentro de otra función?

void imprime_3(void)
{
  printf("3\n");
  // Descomentar para el bucle infinito
  // imprime_1();
}

void imprime_2(void)
{
  printf("2\n");
  imprime_3();
}

void imprime_1(void)
{
  printf("1\n");
  imprime_2();
}


int main(void) {

  imprime_1();

  return 0;
}
