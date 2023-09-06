#include <stdio.h>
#define TAM 10

void ingresar_elementos(int a[], int tam)
{
  // Cargar todos los elementos del arreglo
}

void imprimir_arreglo(int a[], int tam)
{
  // Imprime todos los elementos
}


int main(void) {

  int arreglo[TAM];
  ingresar_elementos(arreglo, TAM);
  imprimir_arreglo(arreglo, TAM);
  float promedio;
  promedio = calcular_promedio(arreglo, TAM);
  printf("El promedio es: %f\n", promedio);

  return 0;
}

// Función que solicita ingresar un número
// Pero solo dentro del rango 0-100
/** int ingreso_y_validación(void){ */
/**   // Completar */
/** } */


float calcular_promedio(int a[], int tam)
/** { */
/**   // Devuelve el promedio de todos los elementos del arreglo */
/** } */
