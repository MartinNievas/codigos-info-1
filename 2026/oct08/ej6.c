// Crear un programa que utilice una función para crear dinámicamente un vector.
// La función deberá recibir la cantidad de elementos y devolver un puntero al vector creado.
// Luego crear funciones para:
// * Cargar el vector.
// * Mostrar el vector.
// * Calcular el promedio.

#include <stdio.h>
#include <stdlib.h>

// COMPLETAR: implementar una función que reserve memoria
// y devuelva un puntero al vector
int *crearArreglo(int n){
}


// COMPLETAR: implementar función para cargar el vector
void cargarArrgelo(int *vinicio, int n){
}

// COMPLETAR: implementar función para mostrar el vector
void mostrarArreglo(int *v, int n){
}


// COMPLETAR: implementar función para calcular el promedio
void calcularPromedio(int *v, int n, float *promedio){
}

int main() {
    int n;
    int *vector;

    printf("Ingrese la cantidad de elementos: ");
    scanf("%d", &n);

    // COMPLETAR: crear el vector utilizando una función

    // COMPLETAR: cargar el vector

    // COMPLETAR: mostrar el vector

    // COMPLETAR: calcular y mostrar promedio

    // COMPLETAR: liberar memoria


    return 0;
}
