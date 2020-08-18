#include <stdio.h>

float cuadrado_ref(float *n)
{
  *n *= *n;
  return *n;
}

float cuadrado_valor(float n)
{
  n *= n;
  return n;
}

int main(void)
{
  float promedio;
  float *pp;

  promedio = 2;
  pp = &promedio;

  //printf("%f,%f,%f,%f\n", promedio, cuadrado_ref(pp), cuadrado_valor(promedio), promedio);
  printf("%f,%f,%f,%f\n", promedio, cuadrado_valor(promedio), cuadrado_ref(pp), promedio);

  return 0;
}
