#include <stdio.h>

int main() {
  int num1, mult3, mult5, resultado;

  printf("Ingrese un número: ");
  scanf("%d", &num1);

  mult3 = num1 % 3;
  mult5 = num1 % 5;

  resultado = mult3 + mult5 == 0;

  printf("Es multiplo de 3 y 5 si aparece un 1, caso contrario, aparece 0.\n");
  printf("Resultado: %d\n", resultado);
}
