#include <stdio.h>

// 1. Declaracion de la estructura
struct Alumno {
    int legajo;
    char nombre[50];
    float promedio;
};


int main() {

    // 2. Declaracion de una variable de tipo struct Alumno
    int numero;
    scanf("%d", &numero);
    struct Alumno alumno1;

    // 3. Asignacion de valores a sus miembros
    scanf("%d", &alumno1.legajo);

    alumno1.promedio = 8.5;
    printf("Ingrese el nombre: ");
    scanf("%s", alumno1.nombre);

    // 4. Mostrar los datos
    printf("Legajo: %d\n", alumno1.legajo);
    printf("Promedio: %.2f\n", alumno1.promedio);
    printf("Nombre: %s\n", alumno1.nombre);

    return 0;
}
