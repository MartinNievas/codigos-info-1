#include <stdio.h>

int main(void) {

  int numero = 10;
  int* pnum;

  pnum = &numero;

  printf("El puntero vale: %p\n", pnum);
  printf("La dirección es: %p\n", &numero);
  printf("Número vale: %d\n", numero);
  printf("El contenido de pnum es: %d\n", *pnum);

  return 0;
}
