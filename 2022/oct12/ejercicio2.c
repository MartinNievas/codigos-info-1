#include <stdio.h>
#define TAM 3

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

void ordenar_por_nombre(alumno_t *, int);
void ordenar_por_legajo(alumno_t *, int);
void ordenar_por_dni(alumno_t *, int);
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

  printf("\nOrdenado por legajo:\n\n");
  // Ordenarlos por legajo
  ordenar_por_legajo(alumnos, TAM);

  // Imprimir los datos ingresados
  imprimir_alumnos(alumnos, TAM);

  printf("\nOrdenado por 3 primeras letras:\n\n");
  // Ordenarlos por legajo
  ordenar_por_nombre(alumnos, TAM);

  // Imprimir los datos ingresados
  imprimir_alumnos(alumnos, TAM);

  return 0;
}

void cargar_datos_alumno(alumno_t* p, int i){

  printf("Ingrese el nombre: ");
  scanf("%s", p[i].personal.nombre);

  printf("Ingrese el legajo: ");
  scanf("%d", &p[i].legajo);

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

  for (int i = 0; i < tam; i++){
    for (int j = 0; j < tam - i - 1; j++){
      alumno_t temp;
      if (p[j].legajo > p[j+1].legajo){
        temp = p[j];
        p[j] = p[j+1];
        p[j+1] = temp;
      }
    }
  }
}

void ordenar_por_dni(alumno_t* p, int tam){

  for (int i = 0; i < tam; i++){
    for (int j = 0; j < tam - i - 1; j++){
      alumno_t temp;
      if (p[j].personal.dni > p[j+1].personal.dni){
        temp = p[j];
        p[j] = p[j+1];
        p[j+1] = temp;
      }
    }
  }
}

/** Ordenar por las 3 primeras letras del nombre */
void ordenar_por_nombre(alumno_t* p, int tam){

  for (int letra = 2; letra >= 0; letra--){
    for (int i = 0; i < tam; i++){
      for (int j = 0; j < tam - i - 1; j++){
        alumno_t temp;
        if (p[j].personal.nombre[letra] > p[j+1].personal.nombre[letra]){
          temp = p[j];
          p[j] = p[j+1];
          p[j+1] = temp;
        }
      }
    }
  }
}
