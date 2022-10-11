#include <stdio.h>
// Lo mismo pero con punteros

struct punto_2D {
  float x;
  float y;
};

void sumar_puntos(struct punto_2D *a,struct punto_2D *b){

  // Dado un puntero "p" a una estructura, podemos acceder a sus
  // miembros a través del operador flecha
  // p->miembro;
  // Es equivalente a desreferenciar y luego acceder al miembro
  // (*p).miembro;

  printf("La suma es:\n");
  printf("x: %f + %f = %f\n", (*a).x, b->x, a->x+b->x);
  printf("y: %f + %f = %f\n", a->y, b->y, a->y+b->y);

}

int main(void) {

  int variable;
  struct punto_2D p1 = {1.0, 2.0}, p2 = {3.0, 5.0};
  struct punto_2D *pp1;

  pp1 = &p1;

  sumar_puntos(pp1, &p2);

  return 0;
}

