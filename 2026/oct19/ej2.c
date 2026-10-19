#include <stdio.h>
#include <stdlib.h>

#define TAM 10

/*
Enunciado:

Desarrollar un programa que permita trabajar con un arreglo dinámico
de puntos en un plano cartesiano.

Cada punto está representado mediante una estructura que contiene sus
coordenadas x e y.

El programa debe:

1. Solicitar al usuario la cantidad de puntos a ingresar, validando
   que se encuentre entre 0 y TAM.

2. Reservar dinámicamente la memoria necesaria para almacenar los
   puntos.

3. Cargar las coordenadas de cada punto mediante una función.

4. Mostrar únicamente los puntos que pertenecen al primer cuadrante,
   es decir, aquellos cuya coordenada x e y sean mayores que cero.

Utilizar:
- Un arreglo dinámico de estructuras.
- Funciones que reciban un arreglo de estructuras.
- malloc() para reservar memoria dinámicamente.

No utilizar punteros a estructuras.
*/

typedef struct {
  float x;
  float y;
} punto2D_t;

/*
 * Carga las coordenadas de los puntos almacenados en el arreglo.
 *
 * Parámetros:
 *   arr  -> arreglo de estructuras punto2D_t
 *   cant -> cantidad de puntos a cargar
 *
 * Utilizar aritmética de puntero para el arreglo de estructura
  (base + indice)->miembro
 */
void cargarArreglo(punto2D_t *arr, int cant) {

  // Recorrer el arreglo y solicitar las coordenadas de cada punto

}

/*
 * Solicita al usuario una cantidad de elementos y valida que
 * se encuentre dentro del intervalo [min, max].
 *
 * Retorna la cantidad validada.
 */
int ingresarTamValidado(int min, int max) {

  // Solicitar un valor al usuario

  // Validar que se encuentre entre min y max

  // Retornar el valor validado

}

/*
 * Recorre el arreglo e imprime únicamente aquellos puntos
 * que pertenecen al primer cuadrante.
 *
 * Un punto pertenece al primer cuadrante cuando:
 *      x > 0
 *      y > 0
 *
 * Utilizar aritmética de puntero para el arreglo de estructura
  (base + indice)->miembro
 */
void imprimirPrimerCuadrante(punto2D_t *arr, int cant) {

  // Recorrer todos los puntos

  // Verificar si cada punto pertenece al primer cuadrante

  // Mostrar los puntos que cumplen la condición

}

int main(void) {

  punto2D_t *puntos;
  int tam;

  // Solicitar la cantidad de puntos y validarla entre 0 y TAM
  tam = ingresarTamValidado(0, TAM);

  // Reservar memoria dinámica para almacenar los puntos
  puntos = malloc(/*Completar*/);

  // Verificar si la reserva de memoria fue exitosa

  // Cargar las coordenadas de los puntos
  cargarArreglo(puntos, tam);

  // Mostrar los puntos que pertenecen al primer cuadrante
  imprimirPrimerCuadrante(puntos, tam);

  // Liberar la memoria reservada dinámicamente

  return 0;
}
