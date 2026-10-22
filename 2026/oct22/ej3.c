#include <stdio.h>
#include <stdlib.h>

#define TAM 10

/*
Enunciado:

Desarrollar un programa que permita registrar las temperaturas
medidas en diferentes sectores de una fábrica.

Cada medición está representada mediante una estructura que
contiene el número del sector y la temperatura registrada.

El programa debe:

1. Solicitar al usuario la cantidad de mediciones a registrar,
   validando que se encuentre entre 0 y TAM.

2. Reservar dinámicamente la memoria necesaria para almacenar
   las mediciones.

3. Cargar los datos de cada medición mediante una función.
   El número del sector debe encontrarse entre 1 y 20, y la
   temperatura debe encontrarse entre -10 y 80 grados Celsius.

4. Mostrar únicamente las mediciones cuya temperatura sea
   superior a 30 grados Celsius.

Utilizar:
- Un arreglo dinámico de estructuras.
- Funciones que reciban un arreglo de estructuras.
- malloc() para reservar memoria dinámicamente.
- free() para liberar la memoria reservada.

No utilizar punteros a estructuras.
*/

typedef struct {
  int sector;
  float temperatura;
} medicion_t;

/*
 * Carga los datos de las mediciones almacenadas en el arreglo.
 *
 * Parámetros:
 *   arr  -> arreglo de estructuras medicion_t
 *   cant -> cantidad de mediciones a cargar
 *
 * Para cada medición:
 *   - Solicitar el número del sector.
 *   - Validar que el sector se encuentre entre 1 y 20.
 *   - Solicitar la temperatura registrada.
 *   - Validar que la temperatura se encuentre entre -10 y 80.
 *
 * Utilizar aritmética de punteros para acceder a los miembros:
 *   (base + indice)->miembro
 */
void cargarArreglo(medicion_t *arr, int cant) {

  // Recorrer el arreglo y solicitar los datos de cada medición

  // Validar el número del sector

  // Validar la temperatura registrada

}

/*
 * Solicita al usuario una cantidad de elementos y valida que
 * se encuentre dentro del intervalo [min, max].
 *
 * Parámetros:
 *   min -> cantidad mínima permitida
 *   max -> cantidad máxima permitida
 *
 * Retorna la cantidad validada.
 */
int ingresarTamValidado(int min, int max) {

  // Solicitar un valor al usuario

  // Validar que se encuentre entre min y max

  // Retornar el valor validado

}

/*
 * Recorre el arreglo e imprime únicamente las mediciones
 * cuya temperatura sea superior a 30 grados Celsius.
 *
 * Parámetros:
 *   arr  -> arreglo de estructuras medicion_t
 *   cant -> cantidad de mediciones almacenadas
 *
 * Utilizar aritmética de punteros para acceder a los miembros:
 *   (base + indice)->miembro
 */
void imprimirTemperaturasAltas(medicion_t *arr, int cant) {

  // Recorrer todas las mediciones

  // Verificar si la temperatura supera los 30 grados

  // Mostrar el sector y la temperatura de las mediciones
  // que cumplen la condición

}

int main(void) {

  medicion_t *mediciones;
  int tam;

  // Solicitar la cantidad de mediciones y validarla entre 0 y TAM
  tam = ingresarTamValidado(0, TAM);

  // Reservar memoria dinámica para almacenar las mediciones
  mediciones = malloc(/* Completar */);

  // Verificar si la reserva de memoria fue exitosa

  // Cargar los datos de las mediciones
  cargarArreglo(mediciones, tam);

  // Mostrar las mediciones con temperaturas superiores a 30 grados
  imprimirTemperaturasAltas(mediciones, tam);

  // Liberar la memoria reservada dinámicamente

  return 0;
}
