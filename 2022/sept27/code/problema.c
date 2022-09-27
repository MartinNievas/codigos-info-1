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
  int nota1, nota2;

  // alumno1 - nombre, apellido, promedio, dni2
  // alumno2 - nombre, apellido, promedio, dni1

  for (int i = 0; i < TAM; i++){
      printf("Ingrese dni: ");
      scanf("%d", &dni[i]);
      printf("Nombres: ");
      scanf("%s", *(nombres+i));
      printf("nota1: ");
      scanf("%d", &nota1);
      printf("nota2: ");
      scanf("%d", &nota2);
      promedio[i] = (nota1 + nota2 )* 0.5;
  }


  return 0;
}
