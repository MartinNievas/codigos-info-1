#include <stdio.h>

int main(void) {

  int contador = 0;
  int num;
  float promedio;

  while (contador < 10){
    printf("Ingrese un número: ");
    scanf("%d", &num);
    promedio += num;
    contador++;
  }

  promedio /= 10.0;

  printf("El promedio es: %f\n", promedio);


  return 0;
}
