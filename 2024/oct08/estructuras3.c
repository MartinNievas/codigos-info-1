#include <stdio.h>

struct punto_2D {
  float x;
  float y;
};


int main(void)
{
  struct punto_2D punto1 = {10.20, 0.3};
  struct punto_2D punto2 = {33.2, 23.12};
  struct punto_2D punto3;

  punto3 = punto1;

  printf("Coordenadas del punto1: (%.3f,%.3f)\n",
      punto1.x, punto1.y);
  printf("Coordenadas del punto2: (%.3f,%.3f)\n",
      punto2.x, punto2.y);
  printf("Coordenadas del punto3: (%.3f,%.3f)\n",
      punto3.x, punto3.y);

  return 0;
}
