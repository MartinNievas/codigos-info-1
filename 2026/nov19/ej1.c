#include <stdio.h>
#include <stdlib.h>

#define TAM 10

/*
Enunciado:

Desarrollar un programa que permita registrar productos de un
comercio y generar un segundo arreglo que contenga únicamente
los productos que tienen un precio inferior a $10000.

Cada producto está representado mediante una estructura que contiene:
- Código del producto.
- Cantidad disponible.
- Precio unitario.

El programa debe:

1. Solicitar al usuario la cantidad de productos a registrar,
   validando que se encuentre entre 1 y TAM.

2. Reservar dinámicamente la memoria necesaria para almacenar
   los productos.

3. Cargar los datos de cada producto mediante una función:
   - Código: entre 100 y 999.
   - Cantidad disponible: entre 0 y 500.
   - Precio unitario: entre 100 y 100000.

4. Implementar una función copiarProductos() que reciba:
   - Un puntero al arreglo original.
   - Un puntero al segundo arreglo.
   - La cantidad de productos originales.

   La función debe copiar al segundo arreglo únicamente aquellos
   productos cuyo precio unitario sea inferior a $10000.

   La copia debe realizarse utilizando punteros a estructuras,
   sin utilizar índices para acceder a los elementos.

5. La función debe retornar la cantidad de productos copiados.

6. Implementar una función imprimirProductos() que reciba un
   puntero al arreglo y la cantidad de elementos, e imprima
   todos los productos almacenados.

7. Mostrar el contenido del arreglo original y del segundo
   arreglo.

Utilizar:
- Arreglos dinámicos de estructuras.
- Punteros a estructuras.
- malloc() para reservar memoria dinámicamente.
- free() para liberar la memoria reservada.
- Aritmética de punteros para recorrer los arreglos.

IMPORTANTE:
La copia de estructuras debe realizarse mediante punteros.
No utilizar índices para acceder a los elementos durante
la copia.
*/

typedef struct {
  int codigo;
  int cantidad;
  float precio;
} producto_t;

/*
 * Solicita una cantidad de elementos y valida que se encuentre
 * dentro del intervalo [min, max].
 *
 * Retorna la cantidad validada.
 */
int ingresarTamValidado(int min, int max) {

  // Solicitar la cantidad de productos

  // Validar que se encuentre entre min y max

  // Retornar la cantidad validada

}

/*
 * Carga los datos de los productos.
 *
 * Parámetros:
 *   arr  -> puntero al primer producto del arreglo
 *   cant -> cantidad de productos
 *
 * Validar:
 *   - Código entre 100 y 999.
 *   - Cantidad entre 0 y 500.
 *   - Precio entre 100 y 100000.
 *
 * Utilizar punteros a estructuras para acceder a los miembros.
 */
void cargarProductos(producto_t *arr, int cant) {

  producto_t *p;

  // Recorrer el arreglo utilizando el puntero p

  // Solicitar y validar el código

  // Solicitar y validar la cantidad

  // Solicitar y validar el precio

  // Avanzar al siguiente elemento

}

/*
 * Copia los productos cuyo precio sea inferior a $10000.
 *
 * Parámetros:
 *   origen  -> puntero al arreglo original
 *   destino -> puntero al segundo arreglo
 *   cant    -> cantidad de productos originales
 *
 * Retorna:
 *   La cantidad de productos copiados.
 *
 * IMPORTANTE:
 *   - Utilizar punteros a estructuras.
 *   - No utilizar índices.
 *   - Copiar todos los campos de la estructura.
 *   - El arreglo destino tiene capacidad para almacenar
 *     como máximo cant productos.
 */
int copiarProductos(producto_t *origen, producto_t *destino, int cant) {

  producto_t *pOrigen;
  producto_t *pDestino;
  int copiados = 0;

  // Inicializar los punteros

  // Recorrer el arreglo original

  // Verificar si el precio es inferior a $10000

  // Si cumple la condición:
  //   - Copiar la estructura al arreglo destino
  //   - Avanzar el puntero destino
  //   - Incrementar la cantidad de elementos copiados

  // Avanzar el puntero origen

  // Retornar la cantidad de productos copiados

}

/*
 * Imprime todos los productos almacenados en un arreglo.
 *
 * Parámetros:
 *   arr  -> puntero al primer producto
 *   cant -> cantidad de productos
 *
 * Utilizar punteros a estructuras para recorrer el arreglo.
 */
void imprimirProductos(producto_t *arr, int cant) {

  producto_t *p;

  // Recorrer el arreglo mediante el puntero p

  // Mostrar los campos de cada producto

  // Avanzar al siguiente elemento

}

int main(void) {

  producto_t *productos;
  producto_t *productosOferta;

  int tam;
  int cantOferta;

  // Solicitar la cantidad de productos
  tam = ingresarTamValidado(1, TAM);

  // Reservar memoria para el arreglo original
  productos = malloc(/* Completar */);

  // Verificar si malloc() fue exitoso

  // Reservar memoria para el arreglo de productos en oferta
  productosOferta = malloc(/* Completar */);

  // Verificar si malloc() fue exitoso

  // Cargar los productos
  cargarProductos(productos, tam);

  // Copiar los productos que cumplen la condición
  cantOferta = copiarProductos(productos, productosOferta, tam);

  // Mostrar todos los productos originales
  printf("\n--- INVENTARIO ORIGINAL ---\n");
  imprimirProductos(productos, tam);

  // Mostrar los productos copiados
  printf("\n--- PRODUCTOS EN OFERTA ---\n");
  imprimirProductos(productosOferta, cantOferta);

  // Liberar la memoria del arreglo original

  // Liberar la memoria del segundo arreglo

  return 0;
}
