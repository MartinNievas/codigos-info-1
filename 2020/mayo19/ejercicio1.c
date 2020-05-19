//Escribir un algoritmo para obtener el promedio simple de un estudiante 
//a partir de dos notas parciales.
//Las notas serán introducidas una a una por el usuario.

#include <stdio.h>

int main(void)
{

  int nota1;
  int nota2;
  float promedio;

  printf("Ingrese la primera nota: ");
  scanf("%d", &nota1);

  printf("Ingrese la segunda nota: ");
  scanf("%d", &nota2);

  promedio = (nota1 + nota2)/2.0;

  printf("El promedio es: %f\n", promedio);

  return 0;
}
