#include <stdio.h>

int main(int argc, char *argv[]) {
  printf("Ingresar el nùmero Real: ");
  float A;
  scanf("%f", &A);
  printf("El valor original es = %f\n", A);
  printf("El valor truncado =/n");
  printf("+ Redondeado hacia arriba = %0.0f\n", A + 0.09);
  printf("- Redondeado hacia abajo = %0.0f\n", A-0.1);
}

