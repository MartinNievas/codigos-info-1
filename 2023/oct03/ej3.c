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
  for (int i = 0; i < CANT_ALU; i++){
    printf("Ingrese el legajo: ");
    scanf("%d",  &alumnos[i].legajo);
    printf("Ingrese el nombre: ");
    scanf("%s", alumnos[i].nombre);
    printf("Ingrese la nota1: ");
    scanf("%d", &alumnos[i].notas[0]);
  }

  // Antes de ordenar
  for (int i = 0; i < CANT_ALU; i++)
    imprimir_elemento(alumnos[i]);

  // Ordenamiento
  struct alumno temp;
  for (int i = 0; i < CANT_ALU; i++){
    for (int j = 0; j < CANT_ALU -1; j++){
      if ( alumnos[j].legajo < alumnos[j+1].legajo){
        temp = alumnos[j];
        alumnos[j] = alumnos[j+1];
        alumnos[j+1] = temp;
      }
    }
  }

  // Ordenar alfabéticamente por nombre

  // Después de ordenar
  for (int i = 0; i < CANT_ALU; i++)
    imprimir_elemento(alumnos[i]);

  return 0;
}

void imprimir_elemento(struct alumno al){
  printf("-----------------\n");
  printf("%d\n", al.legajo);
  printf("%s\n", al.nombre);
}
