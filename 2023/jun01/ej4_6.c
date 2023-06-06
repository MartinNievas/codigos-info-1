#include <stdio.h>

int main(void) {
  float n1, n2, n3;
  float promedio;

  printf ("Ingrese la primera nota: ");
  scanf ("%f", &n1);
  printf ("Ingrese la segunda nota: ");
  scanf ("%f", &n2);
  printf ("Ingrese la tercera nota: ");
  scanf ("%f", &n3);

  promedio = (n1 + n2 + n3)/ 3;

  printf ("Su promedio es: %.2f", promedio);

  return 0;
}
