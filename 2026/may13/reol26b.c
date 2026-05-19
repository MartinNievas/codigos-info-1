#include <stdio.h>

int main(int argc, char *argv[]) {

  int n;

  printf("Ingresa un numero: ");
  scanf("%d", &n);

  int resultado = ((n + 9) / 10) * 10;

  printf("El multiplo de 10 proximo es: %d\n", resultado);

  return 0;
}
