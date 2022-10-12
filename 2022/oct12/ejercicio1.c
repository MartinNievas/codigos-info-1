#include <stdio.h>
#define TAM 10

typedef struct {
  int legajo;
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

void cargar_datos_alumno(alumno_t *p, int i){

  // Completar

}

void imprimir_alumnos(alumno_t *p, int tam){

}
