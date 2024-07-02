#include <stdio.h>

float celsius_a_fahrenheit(float cel)
{
  float far;

  far = cel * 1.8 + 32;

  return far;
}

int main(void)
{
  float gr_cels;
  float gr_fahr;

  printf("Ingrese los grados celsius a convertir: ");
  scanf("%f", &gr_cels);

  gr_fahr = celsius_a_fahrenheit(gr_cels);

  printf("%.2f grados celsius son %.2f grados fahrenheit\n", gr_cels, gr_fahr);

  return 0;
}
