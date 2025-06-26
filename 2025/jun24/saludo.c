#include <stdio.h>

void saludo(void);

int main(void) {

  printf("Antes del saludo\n");
  saludo();
  printf("Después del saludo\n");

  return 0;
}

void saludo(void)
{
  printf("Hola!\n");
}

