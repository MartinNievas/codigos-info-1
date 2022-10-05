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

  struct alumno alumno;

  // Carga de valores

  // Imprimir mediante función
  imprimir_elemento(alumno);

  return 0;
}

/** La función debe imprimir todos los miembros de la estructura */
void imprimir_elemento(struct alumno al){
  // Completar
}

