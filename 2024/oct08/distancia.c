#include <stdio.h>
#include <math.h>

struct punto_2D {
  float x;
  float y;
};

float distancia_al_origen(struct punto_2D punto){

  float distancia;

  distancia = sqrt(pow(punto.x,2) + pow(punto.y, 2));

  return distancia;

}

int main(void) {

  struct punto_2D punto1 = {3.0, 4.0};
  float distancia;

  distancia = distancia_al_origen(punto1);

  printf("Distancia: %f\n", distancia);

  return 0;
}
