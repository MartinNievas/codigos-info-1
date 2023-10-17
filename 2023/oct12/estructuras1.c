#include <stdio.h>

struct punto_2D {
  float x;
  float y;
};


int main(void)
{
  struct punto_2D punto1 = {0,6.0};

  printf("Ingrese coordenada x: ");
  scanf("%f", &punto1.x);

  printf("Las coordenadas del punto son: (%.3f,%.3f)\n", punto1.x, punto1.y);
  return 0;
}
