#include <stdio.h>
// Escribir un algoritmo para obtener el promedio simple de un estudiante a partir de las tres notas parciales. Las notas serán introducidas una a una por el usuario

int main(void) {
  int nota1, nota2, nota3;
  float promedio;

  printf("Ingrese la nota: ");
  scanf("%d", &nota1);
  printf("Ingrese la nota: ");
  scanf("%d", &nota2);
  printf("Ingrese la nota: ");
  scanf("%d", &nota3);

  // Castear el resultado
  promedio = (float)(nota1 + nota2 + nota3)/3;
  // Alternativa
  //promedio = (nota1 + nota2 + nota3)/3.0;
  printf("Promedio: %f\n", promedio);

  return 0;
}
