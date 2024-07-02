/** camila medina */
#include <stdio.h>
// validar y promediar 10 notas ingresadas por el usuario
// Las notas entre 0 y 10
// Calcular el promedio de las 10 notas válidas
int main() {
  int nota, i,notas = 0;
  float promedio;
  printf("Igresar 10 notas para luego obtener su promedio: \n");
  for(i=0; i<10; i++){
    scanf("%d", &nota);
    printf("\n ");
    while(nota<0 || nota>10){
      printf("Error, ingresar un valor entre 0 y 10: \n" );
      scanf("%d", &nota);
      printf(" \n");
    }
    notas += nota;
  }
  promedio = (float)notas/10;
  printf("El promedio del alumno es: %f", promedio);

  return 0;
}

