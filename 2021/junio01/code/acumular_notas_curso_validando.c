#include <stdio.h>
// (6)
// Calcular el promedio de 10 notas ingresadas por el usuario

int main(void) {

  int contador = 10;
  int nota;
  float acumulado = 0, promedio;

  while ( contador > 0 ){
    printf("Ingrese la nota: ");
    scanf("%d", &nota);

    acumulado += nota;
    //contador -= 1;
    contador--;
  }

  promedio = acumulado / 10.;

  printf("El promedio es: %f\n", promedio);

  return 0;
}
