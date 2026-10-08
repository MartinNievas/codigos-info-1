// ## Separar positivos y negativos
// Solicitar al usuario N números enteros.
// Crear una función que reciba el vector y su cantidad y cree dinámicamente:
// Un vector que contenga solamente los números positivos.
// Un vector que contenga solamente los números negativos.
// Las funciones deberán devolver los vectores creados.
// También se deberá informar cuántos elementos contiene cada vector.

#include <stdio.h>
#include <stdlib.h>

// COMPLETAR:
// Crear una función que reciba el vector original
// y genere dinámicamente un vector con los positivos.
//
// La cantidad de positivos debe devolverse mediante
// el parámetro "cantidad".
int *obtenerPositivos(int *vector, int n, int *cantidad) {

    // COMPLETAR


}


// COMPLETAR:
// Crear una función equivalente para los números negativos
int *obtenerNegativos(int *vector, int n, int *cantidad) {

    // COMPLETAR


}


// COMPLETAR:
// Función para mostrar un vector
void mostrarVector(int *vector, int cantidad) {

    // COMPLETAR


}


int main() {
    int n;
    int *vector;
    int *positivos;
    int *negativos;

    int cantidadPositivos;
    int cantidadNegativos;

    printf("Ingrese la cantidad de elementos: ");
    scanf("%d", &n);

    // COMPLETAR:
    // Reservar memoria para el vector original


    // COMPLETAR:
    // Cargar el vector


    // COMPLETAR:
    // Obtener el vector de positivos


    // COMPLETAR:
    // Obtener el vector de negativos


    // COMPLETAR:
    // Mostrar positivos


    // COMPLETAR:
    // Mostrar negativos


    // COMPLETAR:
    // Liberar las tres regiones de memoria


    return 0;
}
