#include <stdio.h>
#include "biblioteca.h"
// 1. Mover los prototipos al .h
// 2. Mover las definicions al .c
//
// 3. Compilar el programa
//  gcc -c calculadora.c
// 3. Compilar la biblioteca
//  gcc -c biblioteca.c
// 4.  Enlazamos los binarios
//  gcc biblioteca.o calculadora.o -o salida.out
//
// 3.bis
//  gcc calculadora.c biblioteca.c -o salida.out
//
// 5. Ejecutar el programa
// ./salida.out
//

int main(void)
{
  float num1, num2;
  printf("Calculadora aburrida con una sola operación - Dividir\n");

  printf("Ingrese el primer número: ");
  scanf("%f", &num1);

  printf("Ingrese el segundo número: ");
  scanf("%f", &num2);

  printf("El cociente es: %f\n", dividir(num1, num2));

  return 0;
}

