#include <stdio.h>

int main(void) {

  int i;
  int cant_temp;
  int temp;
  float promedio = 0;

  printf("Ingrese la cantidad de temperaturas: ");
  scanf("%d", &cant_temp);

  i = 0;
  while ( i < cant_temp) {
    printf("Ingrese la temperatura N %d: ", i + 1);
    scanf("%d", &temp);
    promedio = promedio + temp;
    i++;
  }

  promedio = promedio / cant_temp;
  printf("La temperatura promedio es: %f\n", promedio);

  return 0;
}

