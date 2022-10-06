#include <stdio.h>

struct punto_2D {
  float x;
  float y;
};

struct punto_3D {
  float x;
  float y;
};

int main(void)
{
  struct punto_2D punto1;
  struct punto_3D punto2 = {33.2, 23.12};

  punto1.x = punto2.x * 10.2;
  punto1.y = punto2.y + 12.3;

  return 0;
}
