#include <stdio.h>

struct punto_2D {
  float x;
  float y;
};


int main(void)
{
  struct punto_2D punto1;

  punto1.x = 10.20;
  punto1.y = 0.3;

  printf("Las coordenadas del punto son: (%.3f,%.3f)\n", punto1.x, punto1.y);
  return 0;
}
