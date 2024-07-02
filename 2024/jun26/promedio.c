#include <stdio.h>
// validar y promediar 10 notas ingresadas por el usuario
// Las notas entre 0 y 10
// Calcular el promedio de las 10 notas válidas

int main(void) {
  int nota, acumulado = 0;

  for(int i = 0; i < 10; i++){

    printf("Ingrese nota[%d]: ", i);
    scanf("%d", &nota);
    while( nota < 0 || nota > 10){
    printf("Ingrese nota[%d]: ", i);
      scanf("%d", &nota);
    }
    acumulado = acumulado + nota;

  }
  float promedio;
  promedio = acumulado / 10.0;
  printf("El promedio es: %f", promedio);

  return 0;
}
