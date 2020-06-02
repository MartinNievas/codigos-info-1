#include <stdio.h>
/** Estructura while con bandera o centinela */

int main(void) {

  int i;
  int temp;
  float promedio = 0;
  int repetir = 1;
  int cant_temp = 0;

  i = 0;
  while (repetir == 1) {
    printf("Ingrese la temperatura %d (ingrese -274 para salir): ", i+1);
    scanf("%d", &temp);

    if (temp != -274) {
      promedio = promedio + temp;
      i = i + 1;
      cant_temp = cant_temp + 1;
    } else {
      repetir = 0;
    }
  }

  promedio = promedio / cant_temp;

  printf("La temperatura promedio es: %f\n", promedio);

  return 0;
}
