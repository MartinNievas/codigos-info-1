#include <stdio.h>

int main(void)
{
  float real;
  float nominal;
  int tolerancia;

  printf("Ingrese el valor de la toleracia: ");
  scanf("%d", &tolerancia);

  printf("Ingrese el valor nominal: ");
  scanf("%f", &nominal);

  printf("Ingrese el valor medido de la resistencia: ");
  scanf("%f", &real);

  if (real < (nominal * (1 + tolerancia / 100.0)) && real > (nominal * (1 - tolerancia / 100.0)))
    printf("El valor se encuentra dentro de la tolerancia\n");
  else
    printf("El valor se encuentra fuera de la tolerancia\n");

  return 0;
}
