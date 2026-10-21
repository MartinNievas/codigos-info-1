#include <stdio.h>
#include <stdlib.h>

#define TAM 10

/*
Enunciado:

Desarrollar un programa que permita registrar productos
disponibles en un depósito.

Cada producto está representado mediante una estructura que
contiene un código numérico, una cantidad disponible y un precio
unitario.

El programa debe:

1. Solicitar al usuario la cantidad de productos a registrar,
   validando que se encuentre entre 0 y TAM.

2. Reservar dinámicamente la memoria necesaria para almacenar
   los productos.

3. Cargar los datos de cada producto mediante una función.
   El código debe encontrarse entre 100 y 999, la cantidad
   disponible entre 0 y 500, y el precio unitario entre 1 y
   100000 pesos.

4. Mostrar únicamente los productos que tengan una cantidad
   disponible inferior a 10 unidades.

Utilizar:
- Un arreglo dinámico de estructuras.
- Funciones que reciban un arreglo de estructuras.
- malloc() para reservar memoria dinámicamente.
- free() para liberar la memoria reservada.

No utilizar punteros a estructuras.
*/

typedef struct {
  int codigo;
  int cantidad;
  float precio;
} producto_t;

/*
 * Carga los datos de los productos almacenados en el arreglo.
 *
 * Parámetros:
 *   arr  -> arreglo de estructuras producto_t
 *   cant -> cantidad de productos a cargar
 *
 * Para cada producto:
 *   - Solicitar el código y validarlo entre 100 y 999.
 *   - Solicitar la cantidad y validarla entre 0 y 500.
 *   - Solicitar el precio y validarlo entre 1 y 100000.
 *
 * Utilizar aritmética de punteros para acceder a los miembros:
 *   (base + indice)->miembro
 */
void cargarArreglo(producto_t *arr, int cant) {

  // Recorrer el arreglo y solicitar los datos de cada producto

  // Validar el código del producto

  // Validar la cantidad disponible

  // Validar el precio unitario

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
 * Recorre el arreglo e imprime únicamente los productos cuya
 * cantidad disponible sea inferior a 10 unidades.
 *
 * Parámetros:
 *   arr  -> arreglo de estructuras producto_t
 *   cant -> cantidad de productos almacenados
 *
 * Para cada producto que cumpla la condición, mostrar:
 *   - Código.
 *   - Cantidad disponible.
 *   - Precio unitario.
 *
 * Utilizar aritmética de punteros para acceder a los miembros:
 *   (base + indice)->miembro
 */
void imprimirProductosConPocoStock(producto_t *arr, int cant) {

  // Recorrer todos los productos

  // Verificar si la cantidad disponible es inferior a 10

  // Mostrar los datos de los productos que cumplen la condición

}

int main(void) {

  producto_t *productos;
  int tam;

  // Solicitar la cantidad de productos y validarla entre 0 y TAM
  tam = ingresarTamValidado(0, TAM);

  // Reservar memoria dinámica para almacenar los productos
  productos = malloc(/* Completar */);

  // Verificar si la reserva de memoria fue exitosa

  // Cargar los datos de los productos
  cargarArreglo(productos, tam);

  // Mostrar los productos con menos de 10 unidades disponibles
  imprimirProductosConPocoStock(productos, tam);

  // Liberar la memoria reservada dinámicamente

  return 0;
}
