#include <stdio.h>
#define TAM 3
// Lo mismo que antes, pero ahora con estructuras


struct alu {
  int dni;
  float promedio;
  char nombre[30];
  char apellido[30];
  int nota1;
  int nota2;
};

int main(void) {


  struct alu alumnos[TAM];

  for (int i = 0; i < TAM; i++){
    printf("Ingrese dni: ");
    scanf("%d", &alumnos[i].dni);
    printf("Nombres: ");
    scanf("%s", alumnos[i].nombre);
    printf("Apellido: ");
    scanf("%s", alumnos[i].apellido);
    printf("nota1: ");
    scanf("%d", &alumnos[i].nota1);
    printf("nota2: ");
    scanf("%d", &alumnos[i].nota2);
    alumnos[i].promedio = (alumnos[i].nota1+ alumnos[i].nota2)*0.5;
  }


  // Marcelo
  // Mariano
  // Martin
  // Ordena por nombre
  struct alu temp;
  for (int k = 29; k >= 0; k--){
    for (int i = 0; i < TAM; i++){
      for (int j = 0; j < TAM-1; j++){
        if (alumnos[j].nombre[k] > alumnos[j+1].nombre[k]){

          // Puedo asignar una estructura a otra estructura
          temp = alumnos[j];
          alumnos[j] = alumnos[j+1];
          alumnos[j+1] = temp;

        }
      }
    }
  }

  printf("Ordenados\n\n");
  for (int i = 0; i < TAM; i++){
    printf("dni: %d\n", alumnos[i].dni);
    printf("Nombres: %s\n", alumnos[i].nombre);
    printf("Apellido: %s\n", alumnos[i].apellido);
    printf("promedio: %f\n", alumnos[i].promedio);
    printf("\n");
  }


  return 0;
}

