#include <stdio.h>
#define CANT_ALU 3

struct alumno {
  int legajo;
  char nombre[20];
  char apellido[20];
  char curso[3];
  int notas[3];
  float promedio;
  char estado;
};

int main(void)
{
  struct alumno alumnos[CANT_ALU];

  for (int i=0;i< CANT_ALU;i+=1){

    printf("Ingrese legajo: ");
    scanf (" %d", &alumnos[i].legajo );

    printf("Ingrese Nombre: ");
    scanf (" %s", alumnos[i].nombre );
    printf("Ingrese Apellido: ");
    scanf (" %s", alumnos[i].apellido );
    printf("Ingrese Curso: ");
    scanf (" %s", alumnos[i].curso );

    // Cargar notas
    for (int j = 0; j < 3; j+=1){
      printf("Ingrese nota[%d]: ", j);
      scanf ("%d", &alumnos[i].notas[j] );
    }

    // Calcular el promedio
    float promedio = 0;
    for (int j = 0; j < 3; j+=1)
      promedio += alumnos[i].notas[j];

    promedio /= 3.0;

    alumnos[i].promedio = promedio;

    if(alumos[i].promedio >= 8)
      alumnos[i].estado = 'P';
    else if(alumnos[i].promedio >= 6)
      alumnos[i].estado = 'R';
    else
      alumnos[i].estado = 'L';


  }

  for (int i=0; i<=3; i+=1){

    printf ("alumno  %d", i);

    printf("legajo: %d", alumnos[i].legajo);

    printf("Nombre: %s ", alumnos[i].nombre);
    printf("Ingrese Apellido: %s ",alumnos[i].apellido);
    printf(" Curso: %s ", alumnos[i].curso );
    printf(" Notas: %d ", alumnos[i].notas);
    printf(" promedio: %f", alumnos[i].promedio);
    printf(" estado: %c ", alumnos[i].estado);

  }
  return 0;
}
