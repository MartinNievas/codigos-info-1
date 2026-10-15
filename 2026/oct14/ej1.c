#include <stdio.h>
// Calculadora con punteros a funciones
// Objetivo: utilizar un puntero a función para seleccionar y ejecutar una operación matemática.
// Enunciado
// Desarrollar un programa en C que permita realizar operaciones matemáticas entre dos números enteros.
// El programa debe implementar las siguientes funciones:
// - sumar(a, b): devuelve la suma.
// - restar(a, b): devuelve la resta.
// - multiplicar(a, b): devuelve el producto.
// El usuario debe ingresar dos números y seleccionar una operación mediante un menú.
// El programa debe utilizar un puntero a función para ejecutar la operación seleccionada

float cociente(int a, int b)
{
  float c;
  c = a / (float)b;
  return c;
}

float sumar(int a, int b)
{
  return a + b;
}

float restar(int a, int b)
{
  return a - b;
}


float multiplicar(int a, int b)
{
  return a * b;
}

int main(void)
{
  int a, b;
  int opcion;
  float resultado;

  // COMPLETAR: declarar un puntero a funcion
  // compatible con las cuatro operaciones
  float (*puntero[5])(int, int) = {NULL,
    sumar,restar,multiplicar, cociente};

  printf("Ingrese dos numeros enteros: ");
  scanf("%d %d", &a, &b);

  do{
    printf("\nSeleccione una operacion:\n");
    printf("1. Sumar\n");
    printf("2. Restar\n");
    printf("3. Multiplicar\n");
    printf("4. Cociente\n");
    printf("Opcion: ");
    scanf("%d", &opcion);
    if(opcion < 1 || opcion > 4)
      printf("Error. Opciones del 1 al 4\n");
  }while(opcion < 1 || opcion > 4);

  // Completar
  // Asignar puntero a función correspondiente
  resultado = puntero[opcion](a,b);

  // Completar
  // Utilizar el puntero para obtener el resultado de la función

  printf("Resultado: %f\n", resultado);

  return 0;
}
