#include <stdio.h>
#include "mi_bib.h"
/*Pasos para compilar y enlazar con gcc
$ gcc -c programa.c
$ gcc -c mi_bib.c
$ gcc -o salida.o programa.o mi_bib.o
$ ./salida.o
*/

int main(void)
{
  float num;

  printf("Ingrese un número: ");
  scanf("%f", &num);

  printf("El cuadrado de %f es: %f\n", num, cuadrado(num));
  printf("El cubo de %f es: %f\n", num, cubo(num));

  return 0;
}

