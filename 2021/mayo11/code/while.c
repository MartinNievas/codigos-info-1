#include <stdio.h>

int main(void) {

  int contador = 0;
  float promedio = 0.0;
  int nota;

  while (contador < 10){
    printf("Ingrese la nota: ");
    scanf("%d", &nota);

    promedio = promedio + nota;
    contador = contador + 1;
  }

  promedio = promedio / contador;
  printf("El promedio es: %f\n", promedio);


  return 0;
}
