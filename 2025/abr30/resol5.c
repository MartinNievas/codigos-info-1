#include <stdio.h>

int main(void) {

  int numero = 10;

  printf("El número es: %d\n", numero);
  int tercer_dig = numero/100;
  int cuarto_dig = numero/1000;
  printf("%d\n", tercer_dig);
  printf("%d\n", cuarto_dig);

  return 0;
}
