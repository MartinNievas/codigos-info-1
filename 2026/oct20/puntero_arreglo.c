#include <stdio.h>

typedef struct {
  float x;
  float y;
}punto2D_t;

int main(void) {

  punto2D_t puntos[3];
  punto2D_t *puntero;

  puntero = puntos;

  for (int i = 0; i < 3; i++){
    printf("Punto[%d]\n", i);
    printf("Ingrese la coordenada x: ");
    scanf("%f", &(puntero+i)->x);
    printf("Ingrese la coordenada y: ");
    scanf("%f", &(puntero+i)->y);
  }

  printf("\nPuntos: \n");
  for (int i = 0; i < 3; i++){
    printf("Punto[%d]\n", i);
    printf("x:%f\t", (puntero+i)->x);
    printf("y:%f\n", (puntero+i)->y);
  }

  return 0;
}

