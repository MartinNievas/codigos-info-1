#include <stdio.h>

int ingreso_y_validar(int min, int max){
  int num;

  do {
    printf("Ingrese un número entre %d y %d: ", min, max);
    scanf("%d", &num);
  } while (num > max || num < min);
  return num;
}

int main(void) {

  int numero, min = 30, max = 100;

  numero = ingreso_y_validar(min, max);
  printf("El número es: %d\n", numero);

  return 0;
}
