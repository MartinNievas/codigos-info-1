#include <stdio.h>

int sumar(int a, int b)
{
    return a + b;
}

int restar(int a, int b)
{
    return a - b;
}

int multiplicar(int a, int b)
{
    return a * b;
}

int main(void)
{
    int opcion;
    int a = 10;
    int b = 5;

    // Puntero a una funcion que recibe dos int
    // y devuelve un int
    int (*operacion)(int, int);

    printf("Seleccione una operacion:\n");
    printf("1. Sumar\n");
    printf("2. Restar\n");
    printf("3. Multiplicar\n");
    printf("Opcion: ");

    scanf("%d", &opcion);

    // Seleccionamos la funcion
    switch (opcion)
    {
        case 1:
            operacion = sumar;
            break;

        case 2:
            operacion = restar;
            break;

        case 3:
            operacion = multiplicar;
            break;

        default:
            printf("Opcion invalida\n");
            return 1;
    }

    // Ejecutamos la operacion seleccionada
    printf("Resultado: %d\n", operacion(a, b));

    return 0;
}
