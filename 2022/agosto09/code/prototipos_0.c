#include <stdio.h>
// Convertir a la versión con prototipo

void superficie_cuadrado(float a, float b)
{
  printf("La superficie es: %.2f\n", a*b);
}

int main(void) {

  float alto = 2.0;
  float ancho = 5.0;

  superficie_cuadrado(alto, ancho);

  return 0;
}
