#include <stdio.h>
// Asignar estructuras

struct punto_2D {
  float x;
  float y;
};

struct punto_3D {
  float x;
  float y;
  float z;
};

int main(void)
{
  struct punto_2D punto1;
  struct punto_3D punto2 = {33.2, 23.12, 3.3};

  punto1 = punto2;

  return 0;
}
