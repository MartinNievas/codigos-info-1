#include <stdio.h>
#define TAM 10

typedef struct {
  int legajo;
  float notas[2];
  float promedio;

  struct {
    char nombre[30];
    char apellido[30];
    int dni;
  }personal;

}alumno_t;

void cargar_datos_alumno(alumno_t *, int);
void imprimir_alumnos(alumno_t *, int);

int main(void) {

  alumno_t alumnos[TAM];

  // Cargar los datos de cada alumno dentro de la función
  for (int i = 0; i < TAM; i++){
    cargar_datos_alumno(alumnos, i);
  }

  // Imprimir los datos ingresados
  imprimir_alumnos(alumnos, TAM);

  return 0;
}

void cargar_datos_alumno(alumno_t* p, int i){

  // Completar

}

void imprimir_alumnos(alumno_t* p, int tam){

  for (int i = 0; i < tam; i++){
    printf("------------------------------\n");
    printf("Alumno[%d]\n", i);
    // En notación de punteros
    printf("Nombre: %s\n", (*(p+i)).personal.nombre);
    // En notación de arreglo
    printf("Apellido: %s\n", p[i].personal.apellido);
    // Notación de flecha
    printf("DNI: %d\n", (p+i)->personal.dni);
    printf("Promedio: %f\n", p[i].promedio);
    printf("Legajo: %d\n", p[i].legajo);
  }

}

void ordenar_por_legajo(alumno_t* p, int tam){
  // Completar
}

void ordenar_por_dni(alumno_t* p, int tam){
  // Completar
}

/** Ordenar por las 3 primeras letras del nombre */
void ordenar_por_nombre(alumno_t* p, int tam){
  // Completar
}
