#include <stdio.h>
// Tamanio de la union pixel_u?

typedef struct {
  float gamma;
  int rgb[3];
}pixel_t;

typedef union {
  float alpha;
  pixel_t pixel1;
}pixel_u;

int main(void) {

  pixel_u ejemplo;

  //printf("%ld\n", sizeof(ejemplo));

  ejemplo.pixel1.gamma = 2.2;
  printf("%f\n", ejemplo.alpha);

  return 0;
}
