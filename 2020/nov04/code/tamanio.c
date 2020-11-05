#include <stdio.h>

typedef struct {
  int rgb[3];
  float gamma;
}pixel_t;
// [] rgb[0]
// []
// []
// []
// [] rgb[1]
// []
// []
// []
// [] rgb[2]
// []
// []
// []
// [] float
// []
// []
// []

typedef union {
  int rgb[3];
  float dato2;
}pixel_u;
// [] rgb[0] | [] dato2
// []        | []
// []        | []
// []        | []
// [] rgb[1]
// []
// []
// []
// [] rgb[2]
// []
// []
// []

int main(void) {

  printf("estructura: %ld\nunion: %ld\n", sizeof(pixel_t), sizeof(pixel_u));

  return 0;
}
