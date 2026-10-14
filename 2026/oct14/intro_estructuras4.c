#include <stdio.h>
#define CANT_ALU 2
// Arreglos de estructuras
// Ver como se puede utilizar el typedef para acortar los nombres

// 1. Declaracion de la estructura
struct Alumno {
    int legajo;
    char nombre[30];
    float nota1;
    float nota2;
};


// 2. Funcion que carga y devuelve una estructura
struct Alumno cargarAlumno(void) {

    struct Alumno a;

    printf("Ingrese legajo: ");
    scanf("%d", &a.legajo);

    printf("Ingrese nombre: ");
    scanf("%29s", a.nombre);

    printf("Ingrese primera nota: ");
    scanf("%f", &a.nota1);

    printf("Ingrese segunda nota: ");
    scanf("%f", &a.nota2);

    return a;
}

// 3. Funcion que calcula el promedio
float calcularPromedio(struct Alumno a) {

    return (a.nota1 + a.nota2) / 2.0;
}

// 4. Funcion que muestra los datos del alumno
void mostrarAlumno(struct Alumno a) {

    printf("\nDATOS DEL ALUMNO\n");

    printf("Legajo: %d\n", a.legajo);
    printf("Nombre: %s\n", a.nombre);
    printf("Nota 1: %.2f\n", a.nota1);
    printf("Nota 2: %.2f\n", a.nota2);

    printf("Promedio: %.2f\n", calcularPromedio(a));

    if (calcularPromedio(a) >= 6.0) {
        printf("Condicion: Aprobado\n");
    } else {
        printf("Condicion: Desaprobado\n");
    }
}

int main() {

    struct Alumno alumnos[CANT_ALU];

    // Cargar los datos mediante una funcion
    for (int i = 0; i < CANT_ALU; i++){
      struct Alumno al = cargarAlumno();
      alumnos[i] = al;
    }

    for (int i = 0; i < CANT_ALU; i++){
      mostrarAlumno(alumnos[i]);
    }

    return 0;
}

