#include <stdio.h>

struct punto_2D {
  float x;
  float y;
};

union temperatura{
  float temp;
  float temp2;
  char a;
  struct punto_2D p1;
  union{
    float a;
  }union_con_float_a;
};

temp-0|a-0
temp-1
temp-2
temp-3
