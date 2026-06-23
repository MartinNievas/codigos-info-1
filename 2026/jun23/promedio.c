#include <stdio.h>
/** Escribir un algoritmo que solicite números enteros y muestre el promedio de los mismos. La carga finaliza al ingresar un número negativo. */

int main(void) {

  int num = 1, suma = 0, contador = 0;
  float promedio;

  while (num >= 0){
    printf("Ingrese un número: ");
    scanf("%d", &num);
    if (num >= 0){
      suma = suma + num;
      contador++;
    }
  }
  promedio = (float)suma/contador;

  printf("Suma: %d\n", suma);
  printf("Promedio: %f\n", promedio);


  return 0;
}
