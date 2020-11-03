#include <stdio.h>

typedef struct {
  int rgb[3];
  float gamma;
}pixel_t;


typedef union {
  int rgb[3];
  float gamma;
}pixel_u;

int main(void) {


  printf("struct: %ld\nunion: %ld", sizeof(pixel_t), sizeof(pixel_u));
  return 0;
}
