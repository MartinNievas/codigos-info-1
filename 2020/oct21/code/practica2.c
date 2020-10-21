#include <stdio.h>
#define TAM 100

// Completar el siguiente programa para cumplir con:
//
//1) El usuario debe ingresar la cantidad "tam" de alumnos a cargar. Se debe verificar
// que el mismo sea positivo y menor que TAM
//
//2) Se debe validar el ingreso de las notas. Las mismas deben estar entre uno y diez;
//
//3) Una vez cargadas los nombres y notas de los alumnos. Se debe recorrer nuevamente
// el arreglo calculando el promedio de los mismos

typedef struct{
  char nombre[20];
  int notas[3];
  float promedio;
} alumno_t;

int main(void) {

  alumno_t alumnos[TAM];

  //Completar

  return 0;
}
