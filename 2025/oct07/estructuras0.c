#include <stdio.h>

struct punto_2D {
  float x;
  float y;
};

int main(void) {

  struct punto_2D pa, pb = {0.0, 3.3}, pc;

  pa.x = 1.2;
  pa.y = 0.2;

  pc = pa;

  pc.x = pa.x + pb.x;
  pc.y = pa.y + pb.y;



  return 0;
}
