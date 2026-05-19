#include <stdio.h>

int main(void) {

  float num;

  printf("Ingrese un número: ");
  scanf("%f", &num);

  // ceil, floor
  printf("Arriba: %.0f\n", num);
  printf("Abajo: %d\n", (int)num);

  return 0;
}
