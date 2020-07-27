#include <stdio.h>

float cm2inches(float cent)
{
  float inch;

  inch = cent / 2.54;

  return inch;
}

int main(void)
{
  float cm;
  float pulgadas;

  printf("Ingrese los centímetros a convertir: ");
  scanf("%f", &cm);

  pulgadas = cm2inches(cm);

  printf("%.3f centímetros son %.3f pulgadas\n", cm, pulgadas);

  return 0;
}
