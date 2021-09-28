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
  struct punto_3D punto1 = {1.1 ,2.3};
  struct punto_3D punto2;

  punto2 = punto1;

  return 0;
}
