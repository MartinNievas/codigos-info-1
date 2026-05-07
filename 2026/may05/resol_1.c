#include <stdio.h>

int main(int argc, char *argv[]) {
  int vel;
  int T;

  printf("Este programa calcula la distancia recorrida por un movil a V constante\n\n");

  printf("Ingrese el valor de V en [m/s]: ");
  scanf("%d",&vel);
  printf("Ingrese el valor de T en [s]: ");
  scanf("%d",&T);

  printf("El espacio recorrido es: %d [m]\n",vel*T);

  return 0;
}
