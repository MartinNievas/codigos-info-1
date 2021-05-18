#include <stdio.h>

int main(void) {

  unsigned int numero;

  // 1  -> 0000000000000000001
  // -1 ->          ...1111111

  scanf("%u", &numero);

  printf("Como no signado: %u\n", numero);
  printf("Como signado: %d\n", numero);

  return 0;
}
