#include <stdio.h>

struct punto_2D {
  float x;
  float y;
  char nombre[100];
};


int main(void)
{
  struct punto_2D punto1 = {10.20, 0.3};

  printf("Las coordenadas del punto son: (%.3f,%.3f)\n", punto1.x, punto1.y);
  return 0;
}
