#include <stdio.h>
#define CANT_ALUMNOS 5


int main(void) {

  float promedio_general = 0;
  float acumulado = 0;
  int n1, n2, n3;

  for (int i = 0; i < CANT_ALUMNOS; i++){

    int promedio_particular = 0;
    for (j = 0; j < CANT_NOTAS; j++){
      printf("Ingrese la nota");
      scanf("%d", &n1);
      promedio_particular+=n1;
    }
    float promedio = (promedio_particular)/CANT_NOTAS;
    printf("Tu promedio es: %f,\n", promedio);
    promedio_general += promedio;
  }
  printf("Promedio general: %f\n", promedio_general/CANT_ALUMNOS);

  return 0;
}
