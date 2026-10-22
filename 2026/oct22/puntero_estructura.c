#include <stdio.h>

typedef struct {
  float x;
  float y;
}punto2D_t;

int main(void) {

  punto2D_t pa;
  punto2D_t *puntero;

  puntero = &pa;

  printf("Ingrese la coordenada x: ");
  scanf("%f", &pa.x);
  printf("Ingrese la coordenada x: ");
  scanf("%f", &pa.y);

  printf("Coordenadas\n");
  printf("x:%f\ny:%f\n", pa.x, pa.y);

  // Con punteros
  printf("Ingrese la coordenada x: ");
  scanf("%f", &puntero->x);
  scanf("%f", &(*puntero).x);
  printf("Ingrese la coordenada x: ");
  scanf("%f", &puntero->y);

  printf("Coordenadas\n");
  printf("x:%f\ny:%f\n", puntero->x, puntero->y);

  int num;
  int *pnum;

  pnum = &num;

  *pnum = 10;

  return 0;
}
