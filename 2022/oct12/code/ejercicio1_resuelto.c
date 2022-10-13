#include <stdio.h>
#define TAM 10

typedef struct {
  char nombre[30];
  char apellido[30];
  int dni;
}personal_t;

typedef struct {
  int legajo;
  float promedio;

  personal_t personal;

  personal_t* ppersonal;

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

  printf("Ingrese el legajo: ");
  scanf("%d", &p[i].legajo);
  scanf("%d", &(p+i)->legajo);

  printf("Ingrese el dni: ");
  scanf("%d", &p[i].personal.dni);

  printf("Ingrese el nombre: ");
  scanf("%s", p[i].personal.nombre);
  scanf("%s", (p+i)->personal.nombre);

  p[i].ppersonal = &p[i].personal;

  scanf("%s", (p+i)->ppersonal->nombre);

}

void imprimir_alumnos(alumno_t *p, int tam){

  for (int i = 0; i < tam; i++){
    printf("------------------------------\n");
    printf("Alumno[%d]\n", i);
    // En notación de punteros
    printf("Nombre: %s\n", (*(p+i)).personal.nombre);
    // En notación de arreglo
    printf("Apellido: %s\n", p[i].personal.apellido);
    // Notación de flecha
    printf("DNI: %d\n", (p+i)->personal.dni);
    // Invertir puntero con el indice
    printf("Promedio: %f\n", i[p].promedio);
    printf("Legajo: %d\n", p[i].legajo);
  }

}
