#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 100

// Prototipo de funciones
void inicializar_arreglo(int, int);
int obtener_mayor_elemento(int, int);
int obtener_menor_elemento(int, int);

int main(void) {

  int arreglo[TAM] = {0};

  // 1. Inicializar el arreglo con número aleatorios entre 0 y 1000
  //    utilizando la función
  inicializar_arreglo(arreglo, TAM);

  // 2. Buscar el mayor elemento en el arreglo con la función
  int mayor = obtener_mayor_elemento(arreglo, TAM);

  // 3. Buscar el menor elemento en el arreglo con la función
  int menor = obtener_menor_elemento(arreglo, TAM);


  return 0;
}

// Definiciones de funciones
