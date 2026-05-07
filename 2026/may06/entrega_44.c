#include <stdio.h>

int main()
{
  int first, sec, third;

  printf("Ingrese el valor a promediar: ");
  scanf("%d", &first);
  printf("\nIngrese el 2do valor a promediar: ");
  scanf("%d", &sec);
  printf("\nIngrese el 3er valor a promediar: ");
  scanf("%d", &third);
  float result = (first+sec+third)/3.;
  printf("\nPromedio: %.2f", result);
  return 0;
}
