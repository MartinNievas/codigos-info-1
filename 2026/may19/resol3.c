#include <stdio.h>


int main(void) {
  int numero;
  printf("Ingrese un número: ");
  scanf("%d", &numero);

  int res3 = numero % 3;
  int res5 = numero % 5;

  printf("Si da 1 es divisible\n");
  printf("Si da 0 no es divisible\n");
  printf("%d\n", (res3==0) * (res5==0);

  return 0;
}
