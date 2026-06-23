#include <stdio.h>
/** 1. Escribir un algoritmo que permita ingresar números enteros y calcular */
/** su suma. El proceso debe finalizar cuando se ingrese el número cero. */

int main(void) {

  int num = 1, suma = 0;

  while (num != 0){
    printf("Ingrese un número: ");
    scanf("%d", &num);
    suma = suma + num;
  }
  printf("Suma: %d\n", suma);

  return 0;
}
