#include <stdio.h>

int main(void) {

  int numero;

  printf("Ingrese un número: ");
  scanf("%d", &numero);

  printf("Número: %d\n", numero);
  printf("Sucesor: %d\n", numero+1);
  printf("Antecesor: %d\n",numero-1);

  return 0;
}
