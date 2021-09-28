#include <stdio.h>
#define TAM 2
// Crear un programa que solicite ingresar:
// - DNI
// - nombre
// - apellido
// - 2 notas y almacene el promedio en el arreglo
//
// Ordenar por DNI

int main(void) {

  int dni[TAM];
  float promedio[TAM];
  char nombres[TAM][30];
  char apellidos[TAM][30];
  int nota1, nota2;

  // alumno1 - nombre, apellido, promedio, dni2
  // alumno2 - nombre, apellido, promedio, dni1

  for (int i = 0; i < TAM; i++){
    printf("Ingrese dni: ");
    scanf("%d", &dni[i]);
    printf("Nombres: ");
    scanf("%s", *(nombres+i));
    printf("Apellido: ");
    scanf("%s", *(apellidos+i));
    printf("nota1: ");
    scanf("%d", &nota1);
    printf("nota2: ");
    scanf("%d", &nota2);
    promedio[i] = (nota1 + nota2)*0.5;
  }


  int temp;
  float temp_float;
  char temp_letras;
  for (int i = 0; i < TAM; i++){
    for (int j = 0; j < TAM-1; j++){
      if (dni[j] < dni[j+1]){
        temp = dni[j];
        dni[j] = dni[j+1];
        dni[j+1] = temp;

        temp_float = promedio[j];
        promedio[j] = promedio[j+1];
        promedio[j+1] = temp_float;

        // faltaba intercambiar los nombres y apellidos
        // Intercambio nombres
        for (int k = 0; k < 30; k++){
          temp_letras = nombres[j][k];
          nombres[j][k] = nombres[j+1][k];
          nombres[j+1][k] = temp_letras;
        }

        // Intercambio apellidos
        for (int k = 0; k < 30; k++){
          temp_letras = apellidos[j][k];
          apellidos[j][k] = apellidos[j+1][k];
          apellidos[j+1][k] = temp_letras;
        }

      }
    }
  }

  printf("Ordenados\n\n");
  for (int i = 0; i < TAM; i++){
    printf("dni: %d\n", dni[i]);
    printf("Apellido: %s\n", apellidos[i]);
    printf("Nombres: %s\n", nombres[i]);
    printf("promedio: %f\n", promedio[i]);
    printf("\n");
  }


  return 0;
}

