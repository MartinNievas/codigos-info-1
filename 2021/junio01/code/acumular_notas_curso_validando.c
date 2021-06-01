#include <stdio.h>
// (6)
// Calcular el promedio de 10 notas ingresadas por el usuario

int main(void) {

  int contador = 0;
  int nota;
  float acumulado = 0., promedio;

  while (contador < 10){ // 10->1
    printf("Inrese una nota: ");
    scanf("%d", &nota);

    acumulado += nota;
    contador++;
  }

//contador | contador < 10  | contador++
//0        |       si       |  1
//1        |       si       |  2
//2        |       si       |  3
//
//...
//9        |       si       | 10
//10       |       no____

  promedio = acumulado / 10;
  printf("El promedio es: %f\n", promedio);

  return 0;
}
