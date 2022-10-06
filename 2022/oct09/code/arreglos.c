#include <stdio.h>
#define TAM 2

struct punto2D {
  float x;
  float y;
};

int main(void) {

  struct punto2D arreglo_puntos[TAM];

  for (int i = 0; i < TAM; i++){
    printf("Ingrese x: ");
    scanf("%f", &arreglo_puntos[i].x);
    printf("Ingrese y: ");
    scanf("%f", &arreglo_puntos[i].y);
  }

  for (int i = 0; i < TAM; i++){
    printf("punto[%d]: x:%f, y:%f\n", i,
        arreglo_puntos[i].x,
        arreglo_puntos[i].y);
  }



  return 0;
}
