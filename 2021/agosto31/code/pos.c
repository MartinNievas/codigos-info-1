#include <stdio.h>
#include <math.h>


float dist_orig(float a, float b)
{
  return sqrt(pow(a,2)+pow(b,2));
}

void mover_personaje(float *a, float *b, float dx, float dy)
{
  *a += dx;
  *b += dy;
}

int main(void)
{

  float x = 1, y = 1;
  float dist;
  float *px, *py;

  float movx, movy;

  px = &x;
  py = &y;

  dist = dist_orig(x, y);
  printf("La distancia al origen es: %f\n", dist);

  mover_personaje(px, py, movx, movy);
  printf("x: %f b: %f\n", x, y);


  return 0;
}
