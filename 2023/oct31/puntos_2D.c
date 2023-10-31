#include <stdio.h>

struct puntos_2D_t {
  float x;
  float y;
};

void cargar_puntos(struct puntos_2D_t *arreglo,int cant)
{
  for (i = 0; i < cant; i++){
    printf("Ingrese la coordenada x: ");
    scanf("%f", &(arreglo+i)->x);
    printf("Ingrese la coordenada y: ");
    scanf("%f", &arreglo[i].y);
  }
}

int main(void) {

  struct puntos_2D_t arreglo_de_puntos[10];
  cargar_puntos(arreglo_de_puntos, 10);

  return 0;
}
