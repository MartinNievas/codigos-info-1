#include<stdio.h>

struct punto_2D {
  float x ;
  float y ;
};

struct punto_3D {
  float x ;
  float y ;
};

int main ( void )
{
  struct punto_2D p1 = {1.1 ,2.3};
  struct punto_3D p2;

  p2.x = p1.x;
  p2.y = p1.y;

  return 0;
}
