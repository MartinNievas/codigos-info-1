#include <stdio.h>
#include <math.h>
#define TAM 10
// Arreglo de estructuras, problema

struct punto_2D {
  float x;
  float y;
};

void imprimir_punto_mas_lejano(struct punto_2D*);

int main(void)
{
  struct punto_2D puntos[TAM] = {
    {1.1,3.2},
    {3.5,2.4},
    {3.4,1.1},
    {3.3,2.3},
    {4.5,1.9},
  };

  imprimir_punto_mas_lejano(puntos);

  return 0;
}

/** Función que recibe un arreglo de puntos_2D e imprime el */
/** punto más alejado del orígen
 *
 * Parámetros:
 *  arreglo: Arreglo de punto_2D
 * */
void imprimir_punto_mas_lejano(struct punto_2D* arreglo){
  // Completar
}
