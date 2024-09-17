#include <stdio.h>

int main(void) {

  int num;

  int *pnum;

  num = 100;
  pnum = &num;

  // Imprimir de forma directa
  printf("%d\n", num);
  // Imprimir de forma indirecta
  printf("%d\n", *pnum);

  printf("El puntero: %p\n", pnum);
  printf("La dirección: %p\n", &num);

  printf("El tamaño de un int es: %ld\n", sizeof(int));
  printf("El tamaño de un char es: %ld\n", sizeof(char));
  printf("El tamaño de un puntero a int es: %ld\n", sizeof(int*));
  printf("El tamaño de un puntero a char es: %ld\n", sizeof(char*));

  return 0;
}
