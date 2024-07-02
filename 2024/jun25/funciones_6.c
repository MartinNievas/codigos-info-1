#include <stdio.h>

void impmrimir_datos(int leg, float prom)
{
  printf("Leg: %d\nPromedio: %f", leg, prom);
}

int main(void)
{
  int legajo;
  float promedio;

  printf("Ingrese el legajo:");
  scanf("%d", &legajo);

  printf("Ingrese el promedio:");
  scanf("%f", &promedio);

  impmrimir_datos(legajo,promedio);

  return 0;
}
