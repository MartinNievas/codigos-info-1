#include <stdio.h>// kisinger y Cueyo (va con mayúsculas los nombres propios)

int main(int argc, char *argv[]) {

  float vel;
  float t;
  float disreco;

  printf("Ingrese la velocidad del movil(m/s): ");
  scanf("%f",&vel);

  printf("Ingrese el tiempo recorrido del movil(s): ");
  scanf("%f",&t);

  disreco=vel*t;

  printf("La distancia recorrida en metros del movil es: %f",disreco);

  return 0; 

}
