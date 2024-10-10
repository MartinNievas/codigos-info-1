#include <stdio.h>
// Operaciones

struct punto_2D {
  float x;
  float y;
};


int main(void)
{
  struct punto_2D punto1 = {10.20, 0.3};

  punto1.x += 10;
  punto1.y += 10;

  printf("Coordenadas del punto1: (%.3f,%.3f)\n", punto1.x, punto1.y);


  return 0;
}
