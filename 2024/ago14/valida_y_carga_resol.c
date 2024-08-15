#include <stdio.h>

// Completar la definición de la función
int ingreso_y_validar_temperatura(int min, int max){
  int temp;

  do {
    printf("Ingrese la temperatura (entre %d y %d): ", min, max);
    scanf("%d", &temp);
  } while (temp < min || temp > max);

  return temp;
}

int main(void) {

  int temp, min = 0, max = 300;

  temp = ingreso_y_validar_temperatura(min, max);

  printf("Las temperatura es: %d \n", temp);

  return 0;
}
