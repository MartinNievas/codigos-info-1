#include <stdio.h>

// Funcion que recibe dos enteros y devuelve un entero
int sumar(int a, int b)
{
    return a + b;
}

int main(void)
{
    // Declaracion de un puntero a una funcion que:
    // - recibe dos parametros int
    // - devuelve un int
    int (*operacion)(int, int);

    // Asignamos la direccion de la funcion al puntero
    operacion = sumar;

    // Llamamos a la funcion mediante el puntero
    int resultado = operacion(10, 5);

    printf("Resultado: %d\n", resultado);

    return 0;
}
