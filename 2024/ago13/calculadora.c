#include <stdio.h>
#include "operaciones.h"
// 1. Mover los prototipos al .h
// 2. Mover las definiciones al .c
// 3. Incluir el .h entre comillas dobles ""
// 4. gcc -c calculadora.c -> genera calculadora.o
// 5. gcc -c operaciones.c -> genera operaciones.o
// 6. gcc calculadora.o operaciones.o -o salida.out
//
// Alternativa a 4+5+6
// 7. gcc calculadora.c operaciones.c -o salida.out
//
// Para ejecutar:
// 8. ./salida.out

int main(void) {

  float num1, num2;
  printf("Ingrese dos números: ");
  scanf("%f %f", &num1, &num2);

  printf("La suma es: %f\n", suma(num1,num2));

  return 0;
}
