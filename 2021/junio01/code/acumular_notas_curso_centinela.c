#include <stdio.h>
// (3)
// Calcular el promedio de las notas ingresadas por el usuario
// Para finalizar ingresar un -1

int main(void) {

  float promedio, suma = 0.;
  int nota, contador_notas = 0;
  int repetir = 1;

  while (repetir){
    printf("Ingresar una nota: ");
    scanf("%d", &nota);

    if (nota == -1){
      repetir = 0;
    } else {
      suma = suma + nota;
      contador_notas = contador_notas + 1;
    }
  }

  promedio = suma / contador_notas;

  printf("El promedio de las notas ingresadas es: %f\n", promedio);

  return 0;
}
