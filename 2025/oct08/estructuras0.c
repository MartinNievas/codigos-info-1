#include <stdio.h>

struct punto_2D {
  float x;
  float y;
};

int main(void) {

  struct punto_2D pa, pb = {0.0, 3.3}, pc;

  pa.x = 1.2;
  pa.y = 0.2;
  printf("Ingrese pa.x: ");
  scanf("%f", &pa.x);

  pc.x = pa.x + pb.x;
  pc.y = pa.y + pb.y;

  printf("El valor de pc.x es: %f\n", pc.x);



  return 0;
}
