#include <stdio.h>
#define TAM 4
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
  char *nombres[TAM][30];
  char *apellidos[TAM][30];
  int nota1, nota2;

  // alumno1 - nombre, apellido, promedio, dni2
  // alumno2 - nombre, apellido, promedio, dni1

  for (int i = 0; i < TAM; i++){
      printf("Ingrese dni: ");
      scanf("%d", &dni[i]);
      printf("Apellido: ");
      scanf("%s", *(apellidos+i));
      printf("Nombres: ");
      scanf("%s", *(nombres+i));
      printf("nota1: ");
      scanf("%d", &nota1);
      printf("nota2: ");
      scanf("%d", &nota2);
  }

  int temp;
  float temp_float;
  for (int i = 0; i < TAM; i++){
      for (int j = 0; j < TAM-1; j++){
        if (dni[j] < dni[j+1]){
          temp = dni[j];
          dni[j] = dni[j+1];
          dni[j+1] = temp;

          temp_float = promedio[j];
          promedio[j] = promedio[j+1];
          promedio[j+1] = temp;

        }
      }
  }



  return 0;
}
