#include <stdio.h>

int main(void)
{
  float base;
  float altura;
  float sup;

  printf("Ingrese la base de un triangulo: ");
  scanf("%f", &base);
  printf("Ingrese la altura de un triangulo: ");
  scanf("%f", &altura);

  sup = (base*altura)/2.0;
  printf("La superficie es: %f\n", sup);

  return 0;
}
