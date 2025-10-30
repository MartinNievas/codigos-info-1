#include <stdio.h>
enum colores{
  ROJO=10,
  VERDE=12,
  AZUL
};


int main(void) {

  enum colores pixel;

  pixel = AZUL;

  printf("%d\n", pixel);

  return 0;
}
