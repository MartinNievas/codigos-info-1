#include <stdio.h>

int main(int argc, char *argv[]) {
  float nota1, nota2, nota3, promedio;

  printf("Ingrese nota1: ");
  scanf("%f", &nota1);
  printf("Ingrese nota2: ");
  scanf("%f", &nota2);
  printf("Ingrese nota3: ");
  scanf("%f", &nota3);
  promedio = (nota1 + nota2 + nota3)/3;
  printf("El promedio es: %f", promedio);

  return 0;
}


