#include <stdio.h>

int main(void)
{
  float nota1;
  float nota2;
  float nota3;
  float prom;

  // Ingreso de notas
  printf("Ingrese la primera nota: ");
  scanf("%f", &nota1);
  printf("Ingrese la segunda nota: ");
  scanf("%f", &nota2);
  printf("Ingrese la tercera nota: ");
  scanf("%f", &nota3);

  prom  = (nota1+nota2+nota3)/3;

  printf("El promedio es: %f\n", prom);

  return 0;
}
