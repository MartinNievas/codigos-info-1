#include <stdio.h>
#define CANT_ALU 3
struct alumno {
  int legajo ;
  int dni;
  char nombre [20];
  char apellido [20];
  char curso [3];
  int notas [3];
  float promedio ;
  char estado ;
};

int main ( void )
{
  struct alumno alumnos [ CANT_ALU ];

  for(int i = 0; i < CANT_ALU; i++){
    do{
      printf("Ingrese El numero de DNI del alumno %d: ", i+1);
      scanf("%d", &alumnos[i].dni);
      if(alumnos[i].dni < 0){
        printf("Numero incorrecto... Ingrese nuevamente\n");
      }
    } while(alumnos[i].dni < 0);

    printf("Ingrese el Apellido: ");
    scanf("%s", alumnos[i].apellido);

    printf("Ingrese el Nombre: ");
    scanf("%s", alumnos[i].nombre);

    printf("Ingrese el curso: ");
    scanf("%s", alumnos[i].curso);

    float sumanotas=0;
    for(int j=0; j < 3 ; j++){
      printf("Ingrese la nota %d del alumno %d: ",j+1,i+1);
      scanf("%d", &alumnos[i].notas[j]);
      sumanotas+= alumnos[i].notas[j];
    }
    alumnos[i].promedio = sumanotas / 3;


    if(alumnos[i].promedio >= 8)
      alumnos[i].estado = 'P';
    else if(alumnos[i].promedio >= 6)
      alumnos[i].estado = 'R';
    else
      alumnos[i].estado = 'L';

  }

  for(int i= 0; i < CANT_ALU; i++){
    printf("El promedio del alumno %d con DNI %d es: %.2f\n", i+1, alumnos[i].dni,
        alumnos[i].promedio);
  }
  for(int i = 0; i < CANT_ALU;i++){
    if(alumnos[i].promedio >= 8){
      printf("Alumno con dni %d tiene como condicion PROMOCIONADA\n", alumnos[i].dni);
    }
    if (alumnos[i].promedio >= 6 && alumnos[i].promedio < 8 ){
      printf("Alumno con dni %d tiene como condicion APROBADO\n", alumnos[i].dni);
    }

    if (alumnos[i].promedio < 6 ){
      printf("Alumno con dni %d tiene como condicion LIBRE\n", alumnos[i].dni);
    }

  }

  return 0;
}
