#include <stdio.h>
#define CANT_ALU 3

struct alumno {
  int legajo;
  char nombre[20];
  char apellido[20];
  char curso[3];
  int notas[4];
  float promedio;
  char estado;
};

void imprimir_elemento(struct alumno);

int main(void) {

  struct alumno alumnos[CANT_ALU];

  // Carga de elementos

  // Imprimir antes de ordenar
  for (int i = 0; i < CANT_ALU; i++)
    imprimir_elemento(alumnos[i]);

  // Ordenamiento por promedio

  // Imprimir después de ordenar
  for (int i = 0; i < CANT_ALU; i++)
    imprimir_elemento(alumnos[i]);

  return 0;
}

void imprimir_elemento(struct alumno al){
  // Completar
}
