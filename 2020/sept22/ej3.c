#include <stdio.h>
#define TAM 5
//---------------------------------------------------
//Probablemente no funcione, es solo para un ejeplo
//de como resolver el ej3 de la guía de clases.
//PR are welcome :D
//---------------------------------------------------

struct alumno {
  int legajo;
  char nombre[20];
  int notas[4];
  float promedio;
};


int main(void)
{

  struct alumno alumnos[TAM];

  for ( int i = 0; i < TAM; i++){

    do {
      printf("Ingrese legajo positivo: ");
      scanf("%d", &alumnos[i].legajo);
    } while (alumnos[i].legajo < 0);

    printf("Ingrese el nombre: ");
    scanf("%s", alumnos[i].nombre);

    printf("Ingrese nota 1: ");
    scanf("%d", &alumnos[i].nota[0]);
    printf("Ingrese nota 2: ");
    scanf("%d", &alumnos[i].nota[1]);
    printf("Ingrese nota 3: ");
    scanf("%d", &alumnos[i].nota[2]);

    alumnos[i].promedio =(alumnos[i].notas[0] +
                          alumnos[i].notas[1] +
                          alumnos[i].notas[2])/3.0;

    if (alumnos[i].promedio >= 8){
        alumnos[i].estado = 'P';
    } else if ( >= 6) {
        alumnos[i].estado = 'R';
    } else {
        alumnos[i].estado = 'L';
      }

  }


  return 0;
}
