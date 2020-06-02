#include <stdio.h>

int main(void) {

  int i;
  int cant_temp;
  int temp;
  float promedio = 0;

  printf("Ingrese la cantidad de temperaturas: ");
  scanf("%d", &cant_temp);


  for (i = 0; i < cant_temp; i++) {
    printf("Ingrese la temperatura N %d: ", i + 1);
    scanf("%d", &temp);
    promedio = promedio + temp;
  }


  promedio = promedio / cant_temp;
  printf("La temperatura promedio es: %f\n", promedio);

  return 0;
}
