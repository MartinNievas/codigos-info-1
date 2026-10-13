#include <stdio.h>

// 1. Declaracion de la estructura
struct Alumno {
    int legajo;
    char nombre[50];
    float promedio;
};

int main() {

    // 2. Declaracion de una variable de tipo struct Alumno
    struct Alumno alumno1;

    // 3. Asignacion de valores a sus miembros
    alumno1.legajo = 1234;
    alumno1.promedio = 8.5;

    // Para los arreglos de caracteres se utiliza strcpy
    // o se puede inicializar la estructura al declararla.

    // 4. Mostrar los datos
    printf("Legajo: %d\n", alumno1.legajo);
    printf("Promedio: %.2f\n", alumno1.promedio);

    return 0;
}
