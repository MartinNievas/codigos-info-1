
# include <stdio.h>
# define CANT_ALU 3

struct alumno {
  int legajo;
  char nombre[20];
  char apellido[20];
  char curso[3];
  int notas[4];
  float promedio;
  char estado;
};

void ingresar_datos(struct alumno *arreglo);

int main ( void ){

  struct alumno alumnos [CANT_ALU];
  //se vienen cositas al Codeshare
  for(int i=0; i<CANT_ALU; i++){

    do{
      printf("Ingrese su numero de legajo: ");
      scanf("%d", &alumnos[i].legajo);
    }while(alumnos[i].legajo<0);

    printf("Ingrese su nombre: ");
    scanf("%s", alumnos[i].nombre);

    printf("Ingrese su apellido: ");
    scanf("%s", alumnos[i].apellido);

    printf("Ingrese su curso: ");
    scanf("%s", alumnos[i].curso);

    int suma=0;

    for(int j=0; j<4; j++){
      printf("Ingrese la nota [%d]: ", j);
      scanf("%d", &alumnos[i].notas[j]);
      suma += alumnos[i].notas[j];
    }

    alumnos[i].promedio = suma / 4.0;
  }

  for(int i=0; i<CANT_ALU; i++){
    printf("Nombre: %s\n", alumnos[i].nombre);
    printf("Legajo: %d\n", alumnos[i].legajo);
    if(alumnos[i].promedio>=8){
      printf("Promocionado\n");
    } else if(alumnos[i].promedio<8 || alumnos[i].promedio>=6){
      printf("Regular\n");
    }else{
      printf("Libre\n");
    }
  }
  return 0;
}


