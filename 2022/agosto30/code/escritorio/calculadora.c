#include <stdio.h>
#include "biblioteca.h"

// 1. Creamos biblioteca.h y bilbioteca.c
// 2. Mover los prototipos a biblioteca.h
// 3. Mover las definiciones a biblioteca.c
// 4. Agregar el include bilbioteca.h
//
// 5. Compilar:
//    gcc -c calculadora.c
// 6. Compilar:
//    gcc -c biblioteca.c
// 7. Enlazar los archivos
//    gcc biblioteca.o calculadora.o
//
// 8. Ejecutar
//    ./a.out
//

int main(void)
{
  float num1, num2;
  printf("Calculadora aburrida con una sola operación - Dividir\n");

  printf("Ingrese el primer número: ");
  scanf("%f", &num1);

  printf("Ingrese el segundo número: ");
  scanf("%f", &num2);

  printf("La suma es : %f\n", suma(num1, num2));


  return 0;
}

