#include <stdio.h>
// Calculadora con punteros a funciones
// Objetivo: utilizar un puntero a función para seleccionar y ejecutar una operación matemática.
// Enunciado
// Desarrollar un programa en C que permita realizar operaciones matemáticas entre dos números enteros.
// El programa debe implementar las siguientes funciones:
// - sumar(a, b): devuelve la suma.
// - restar(a, b): devuelve la resta.
// - multiplicar(a, b): devuelve el producto.
// El usuario debe ingresar dos números y seleccionar una operación mediante un menú.
// El programa debe utilizar un puntero a función para ejecutar la operación seleccionada

// Funcion que devuelve la suma de dos enteros
int sumar(int a, int b)
{
    // COMPLETAR: devolver la suma
}

// Funcion que devuelve la resta de dos enteros
int restar(int a, int b)
{
    // COMPLETAR: devolver la resta
}

// Funcion que devuelve el producto de dos enteros
int multiplicar(int a, int b)
{
    // COMPLETAR: devolver el producto
}

int main(void)
{
    int a, b;
    int opcion;
    int resultado;

    // COMPLETAR: declarar un puntero a funcion
    // compatible con las tres operaciones


    printf("Ingrese dos numeros enteros: ");
    scanf("%d %d", &a, &b);

    printf("\nSeleccione una operacion:\n");
    printf("1. Sumar\n");
    printf("2. Restar\n");
    printf("3. Multiplicar\n");
    printf("Opcion: ");
    scanf("%d", &opcion);

    // COMPLETAR:
    // 1. Seleccionar la funcion correspondiente.
    // 2. Asignarla al puntero.
    // 3. Validar la opcion ingresada.


    // COMPLETAR: ejecutar la funcion mediante
    // el puntero y guardar el resultado.


    printf("Resultado: %d\n", resultado);

    return 0;
}
