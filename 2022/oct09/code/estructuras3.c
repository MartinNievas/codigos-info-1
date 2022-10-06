#include <stdio.h>

struct punto_2D {
  float x;
  float y;
};


int main(void)
{
  struct punto_2D punto1 = {10.20, 0.3};
  struct punto_2D punto2;

  punto2 = punto1;

  printf("Coordenadas del punto2: (%.3f,%.3f)\n", punto2.x, punto2.y);
  return 0;
}
