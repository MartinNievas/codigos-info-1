#include <stdio.h>
// Supongamos que necesitamos almacenar un número entero, un número real o un carácter. En cada momento, solamente necesitamos guardar uno de esos datos.
// Podemos utilizar una unión para representar estas alternativas.

// Definicion de la union
typedef union {
    int entero;
    float real;
    char caracter;
} dato_t;

int main() {
    dato_t dato;

    // Guardar un numero entero
    dato.entero = 25;
    printf("Entero: %d\n", dato.entero);

    // Guardar un numero real
    dato.real = 3.14;
    printf("Real: %.2f\n", dato.real);

    // Guardar un caracter
    dato.caracter = 'A';
    printf("Caracter: %c\n", dato.caracter);

    return 0;
}
