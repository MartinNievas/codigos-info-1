#include <stdio.h>
// Operaciones

struct punto_2D {
  float x;
  float y;
};


int main(void)
{
  struct punto_2D punto1;
  struct punto_2D punto2 = {33.2, 23.12};

  punto1 = punto2;
  // printf("Asigna\n");
  // punto1 = 2 * punto2;
  // punto1 = punto2 + punto2;

  printf("Coordenadas del punto1: (%.3f,%.3f)\n", punto1.x, punto1.y);
  printf("Coordenadas del punto2: (%.3f,%.3f)\n", punto2.x, punto2.y);

  return 0;
}
