#include <stdio.h>
// (3)
// Calcular el promedio de las notas ingresadas por el usuario
// Para finalizar ingresar un 11

int main(void) {

  float promedio, suma = 0.;
  int nota = 0, contador_notas = 0;

  while (nota != 11){
    printf("Ingrese la nota: ");
    scanf("%d", &nota);

    if (nota != 11){
      // contador_notas+=1;
      contador_notas++;

      //suma = suma + nota;
      suma += nota;
    }
    // 10 + 8 + (-1) = 17/3
  }

  promedio = suma / contador_notas;
  printf("Su promedio: %f\n", promedio);

  return 0;
}
