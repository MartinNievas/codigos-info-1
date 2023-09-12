#include <stdio.h>

int main(void)
{
  float nota;
  float *pnota;

  // Asigno valor a la variable
  nota = 9;

  // Asigno dirección de memoria al puntero
  pnota = &nota;

  // Imprimo de forma directa
  printf("El valor de nota es: %f\n", nota);
  // Imprimo de forma indirecta
  printf("Contenido de *pnota: %f\n",*pnota);

  return 0;
}
