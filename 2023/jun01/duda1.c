#include <stdio.h>

int main(int argc, char *argv[]) {

  float nota1, nota2, nota3, promedio;

  printf("Ingrese la Primer Nota: ");
  scanf("%f", &nota1);
  printf("Ingrese la Segunda Nota: ");
  scanf("%f", &nota2);
  printf("Ingrese la Primer Nota: ");
  scanf("%f", &nota3);

  promedio =(nota1 + nota2 + nota3) / 3;

  printf("El Promedio Es: %.2f", promedio);
  return 0;
}
