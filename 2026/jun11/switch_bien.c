#include <stdio.h>

int main(void) {
  int op;

  printf("1. Hola\n2. Chau\n");
  printf("Elija una opción:");
  scanf("%d", &op);

  switch(op){
    case 1:
      printf("Hola\n");
      break;
    case 2:
      printf("Chau\n");
      break;
    default:
      printf("Opción no válida\n");
  }

  return 0;
}
