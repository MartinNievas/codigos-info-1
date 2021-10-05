#include <stdio.h>

// Reservan, son globales
struct punto_2D {
  float x;
  float y;
}punto1, punto2, punto3;
struct punto_2D punto4;

typedef struct punto_3D {
  float x;
  float y;
  float z;
}punto3D_t;

// Variable global
punto3D_t punto5;

int main(void) {

  struct punto_3D punto8;
  punto3D_t punto6;
  struct punto_2D punto_7;

  return 0;
}
