#include <stdio.h>

int main()
{
  int nota1;
  int nota2;
  int nota3;

  printf("Ingrese su nota del primer parcial: ");
  scanf("%d", &nota1);
  printf("Ingrese su nota del segundo parcial: ");
  scanf("%d", &nota2);
  printf("Ingrese su nota del tercer parcial: ");
  scanf("%d", &nota3);

  printf("Promedio: %f",(nota1+nota2+nota3)/3.0);

  return 0;
}
