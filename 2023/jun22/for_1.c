#include <stdio.h>

int main(void) {

  int i, nota, contador = 1;
  float promedio = 0;

  for (i = 0; i < 10; i++){
    printf("Ingrese la nota: ");
    scanf("%d", &nota);
    promedio += nota;
    contador++;
  }

  promedio /= contador;

  printf("El promedio es: %f\n", promedio);

  return 0;
}
