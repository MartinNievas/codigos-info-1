#include <stdio.h>
struct punto_2D {
  float x;
  float y;
};

int main(void) {

  struct punto_2D puntos[10];
  struct punto_2D *ppuntos[10];

  puntos[0].x = 1.1;
  printf("%f\n", puntos[0].x);

  ppuntos[0] = &puntos[0];

  ppuntos[0]->x = 1.1;
  printf("%f\n", ppuntos[0]->x);

  return 0;
}
