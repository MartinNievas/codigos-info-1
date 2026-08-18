#include <stdio.h>

int obtener_contador(void)
{
  int cont = 0;
  return cont++;
}

int main(void) {

  int cuentas;

  cuentas = obtener_contador();

  printf("cuentas: %d\n", cuentas);

  return 0;
}
