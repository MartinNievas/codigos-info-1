#include <stdio.h>

void imprimir_datos(int leg, float prom)
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

  imprimir_datos(legajo,promedio);

  return 0;
}
