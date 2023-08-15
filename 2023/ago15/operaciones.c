#include <stdio.h>

int main(void) {

  unsigned long int dni[10];

  printf("Ingrese su DNI: ");
  scanf("%lu", &dni[0]);

  printf("El DNI ingresado es: %lu\n", dni[0]);

  return 0;
}
