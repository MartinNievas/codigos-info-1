#include <stdio.h>
#define TAM 10
// Modificar el programa de la guía de estructuras repetitivas
// ejercicio número 4, para que el valor de filas y columnas sea
// ingresado en una función que valida el rango del mismo.
// El mismo debe estar entre 0 y TAM
//
// ¿Qué cambio se puede realizar?


int obtener_filas(void)
{
  int filas = 2;

  // Completar

  return filas;
}

int obtener_columnas(void)
{
  int columnas = 2;

  // Completar

  return columnas;
}

int main(void) {

  int filas, cols;

  filas = obtener_filas();
  cols = obtener_columnas();

  for (int i = 0; i < filas; i++){
    for (int j = 0; j < cols; j++){
      printf("%d ", filas * i + j);
    }
    printf("\n");
  }


  return 0;
}
