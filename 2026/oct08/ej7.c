// Escribir una función crearVector() que reciba como parámetro la cantidad de elementos y reserve dinámicamente memoria para un vector de enteros utilizando malloc().
// La función debe devolver el puntero al vector.
// Luego, desde main(), cargar los elementos mediante otra función y mostrarlos mediante una tercera función.
// Finalmente, liberar la memoria.

#include <stdio.h>
#include <stdlib.h>

// COMPLETAR:
// Crear una función que reciba la cantidad de elementos
// y devuelva un puntero a un vector de enteros
int *crearVector(int cantidad) {

    // COMPLETAR


}


// COMPLETAR:
// Crear una función que reciba el vector y su cantidad
// y permita cargar sus elementos
void cargarVector(int *vector, int cantidad) {

    // COMPLETAR


}


// COMPLETAR:
// Crear una función para mostrar el vector
void mostrarVector(int *vector, int cantidad) {

    // COMPLETAR


}


int main() {
    int cantidad;
    int *vector;

    printf("Ingrese la cantidad de elementos: ");
    scanf("%d", &cantidad);

    // COMPLETAR:
    // Crear el vector utilizando la función crearVector()


    // COMPLETAR:
    // Cargar el vector


    // COMPLETAR:
    // Mostrar el vector


    // COMPLETAR:
    // Liberar la memoria


    return 0;
}
