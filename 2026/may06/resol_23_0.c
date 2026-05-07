#include <stdio.h>

int main()
{
  int edad;
  float altura, peso;

  printf("Introduce tu edad:");
  scanf("%d", &edad);

  printf("Introduce tu altura:");
  scanf("%f", &altura);

  printf("Introduce tu peso:");
  scanf("%f", &peso);

  printf("Datos:\n -Edad: %d años\n \
      -Altura: %.2f metros\n \
      -Peso: %.2f Kg\n", edad, altura, peso);

  return 0;
}
