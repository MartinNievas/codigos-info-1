#include <stdio.h>

typedef struct {
  int dato;
}punto_1D;

int main(void) {

  punto_1D puntos[4] = { {1}, {5}, {7}, {8}};

  punto_1D max;

  max = puntos[0];

  for (int i = 0; i < 4; i++){
    if (puntos[i].dato > max.dato)
      max = puntos[i];
  }

  return 0;
}
