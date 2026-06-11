#include <stdio.h>

int main(void) {
  int op;

  printf("1. Hola\n2. Chau\n");
  printf("Elija una opción:");
  scanf("%d", &op);

  if (op == 1) {
    printf("Hola\n");
  } else if (op == 2) {
    printf("Chau\n");
  }

  return 0;
}
