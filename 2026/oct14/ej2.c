#include <stdio.h>
// Aplicación de una operación a un vector
// Objetivo: utilizar un puntero a función para procesar los elementos de un arreglo.
// Enunciado
// Desarrollar un programa que trabaje con un vector de números enteros.
// El programa debe implementar dos funciones:
// - cuadrado(n): devuelve el cuadrado de un número.
// - doble(n): devuelve el doble de un número.
// Además, debe implementar una función llamada procesarVector que reciba:
// - Un vector de enteros.
// - La cantidad de elementos.
// - Un puntero a una función que reciba un entero y devuelva un entero.
// La función procesarVector debe recorrer el vector y mostrar el resultado de aplicar la operación recibida a cada elemento.
// En main, se debe llamar a procesarVector dos veces: primero para calcular los cuadrados y después para calcular los dobles.

// Devuelve el cuadrado de un numero
int cuadrado(int n)
{
    // COMPLETAR
}

// Devuelve el doble de un numero
int doble(int n)
{
    // COMPLETAR
}

// Procesa un vector utilizando una funcion recibida
void procesarVector( int vector[], int cantidad,
    int (*operacion)(int)
)
{
    int i;

    for (i = 0; i < cantidad; i++)
    {
        // COMPLETAR:
        // Aplicar la funcion al elemento actual
        // y mostrar el resultado.
    }

    printf("\n");
}

int main(void)
{
    int vector[] = {2, 4, 6, 8, 10};
    int cantidad = 5;

    printf("Cuadrados:\n");

    // COMPLETAR:
    // Llamar a procesarVector utilizando cuadrado.


    printf("Dobles:\n");

    // COMPLETAR:
    // Llamar a procesarVector utilizando doble.


    return 0;
}
