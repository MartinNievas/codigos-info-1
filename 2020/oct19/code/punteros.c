#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 100

// Función que recibe un puntero a un arreglo y su tamaño
// Esta función debe cargar los elementos del arreglo con
// valores aleatorios entre -273 y 3500
// Utilizar aritmética de punteros
void inicializar_aleatorio(int *, int);

// Función que recibe dos punteros a arreglos, y su tamaño
// Ambos arreglos tienen la misma longitud
// Esta función debe determinar el tipo de alerta, en base
// a las temperaturas de la siguiente forma:
// rango        | letra
// (-273,0)     | "r"
// [0, 1000]    | "v"
// (1000,3500]  | "a"
void calcular_alertas(int*, char*, int);

int main(void) {

  int temperaturas[TAM];
  char alertas[TAM];

  return 0;
}
