#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 10
/** Transponer el siguiente arreglo bidimensional */

typedef struct {
  float x;
  float y;
} punto2d_t;

void borrar_cercanos(punto2d_t* arreglo, float valor, int cant);
void imprimir_puntos(punto2d_t* arreglo, int cant);

int main(void) {

  punto2d_t puntos[TAM];
  srand(time(NULL));
  float radio = 1.0;
  int cantidad;

  // Solicitar al usuario la cantidad de puntos a utilizar. Validar que sea positivo y menor a TAM

  // Inicializar las posiciones x e y de forma aleatoria (son floats, probar rand/rand)

  // Poner a 0.0 los puntos que estén estén dentro del círculo con radio: "radio"
  borrar_cercanos(puntos, radio, cantidad);

  // Imprimir los puntos del arreglo
  imprimir_puntos(puntos, cantidad);


  return 0;
}

