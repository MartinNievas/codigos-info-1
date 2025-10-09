//Fernandez Valentin

#include<stdio.h>

struct alumno{
  int legajo;
  char nombre[20];
  char apellido[20];
  int dni;
  int notas[3];
  char estado;
};


int main(void){

  struct alumno alumnos[3];
  float aux=0;


  for(int i=0;i<3;i++){


    do{

      printf("Ingrese su dni: ");
      scanf("%d",&alumnos[i].dni);

      printf("Ingrese su legajo: ");
      scanf("%d",&alumnos[i].legajo);

      if(alumnos[i].dni<0){

        printf("El dni no puede ser negativo, intente de nuevo\n");
      }

      if(alumnos[i].legajo<0){

        printf("El legajo no puede ser negativo, intente de nuevo\n");
      }

    } while(alumnos[i].dni<0 && alumnos[i].legajo<0);

  }

  printf("ingrese las notas: \n");

  for(int i=0; i<3;i++){

    for(int j=0; j<3;j++){

      printf("Alumno %dº, nota %dº: ",i+1,j+1);
      scanf("%d",&alumnos[i].notas[j]);
    }

  }

  for(int i=0;i<3;i++){

    for(int j=0;j<3;j++){

      aux+=alumnos[i].notas[j];
    }

    aux/=3;

    if(aux>=8){

      alumnos[i].estado='P';
    } else if (aux>=6){
      alumnos[i].estado='R';
    }else{
      alumnos[i].estado='L';
    }

    aux=0;
  }


  printf("Condiciones: \n");

  for(int i=0;i<3;i++){

    printf("Alumno %dº: %c\n",i,alumnos[i].estado);
  }

  return 0;

}  
