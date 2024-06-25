#include <stdio.h>

int main(void) {

  int num;
  float promedio;

  for(int contador = 0; contador < 10; contador++){
    printf("Ingrese un número: ");
    scanf("%d", &num);
    promedio += num;
  }

  promedio /= 10.0;

  printf("El promedio es: %f\n", promedio);


  return 0;
}
