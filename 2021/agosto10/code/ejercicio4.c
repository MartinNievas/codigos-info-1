#include <stdio.h>
#define TAM 10
// Modificar el programa anterior (ejercicio3) para que la matriz se imprima
// desde una función que toma la cantidad de filas y columnas como
// parámetro

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

void imprimir_matriz(int filas, int columnas)
{
  // Completar
}


int main(void) {

  int filas, cols;

  filas = obtener_filas();
  cols = obtener_columnas();
  imprimir_matriz(filas, cols);

  return 0;
}

