#include <stdio.h>

int main(void) {

  int nota1, nota2, nota3;
  float promedio;

  printf("Ingrese la primer nota: ");
  scanf("%d", &nota1);
  printf("Ingrese la segunda nota: ");
  scanf("%d", &nota2);
  printf("Ingrese la tercer nota: ");
  scanf("%d", &nota3);

  // Tengo que dividir por 3.0 para que el resultado sea float
  promedio = (nota1 + nota2 + nota3)/3.0;
  // Alternativa
  // promedio = (nota1 + nota2 + nota3)/(float)3;
  // Alternativa
  // promedio = (float)(nota1 + nota2 + nota3)/3;

  printf("El promedio es: %f\n", promedio);

  return 0;
}
