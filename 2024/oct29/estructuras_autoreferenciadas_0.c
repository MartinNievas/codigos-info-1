#include <stdio.h>

struct punto_3D{
  float x;
  float y;
  float z;
  struct punto_3D *pa;
};

int main(void) {

  struct punto_3D p1;
  p1.pa = &p1;

  p1.pa->x = 1.23;

  printf("pp1x: %f\n", p1.pa->x);
  printf("pp1x: %f\n", (*p1.pa).x);





  return 0;
}
