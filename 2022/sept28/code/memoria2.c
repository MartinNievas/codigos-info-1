#include <stdio.h>
#define TAM 10

void imprime_saludo(void)
{
  printf("Hola\n");
}

int main(void) {

  int arreglo[TAM];
  int* parreglo;

  parreglo = &arreglo[1];

  printf("primero: %p\n", arreglo);
  printf("primero: %p\n", &arreglo[0]);
  imprime_saludo();
  printf("función: %p\n", imprime_saludo);

  return 0;
}
