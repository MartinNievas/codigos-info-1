#include <stdio.h>

typedef struct {
  int rgb[3];
  /** int r; */
  /** int g; */
  /** int b; */
  float gamma;
}pixel_t;

typedef union {
  int dato1;
  float dato2;
}pixel_u;

// dato1  [] dato2 []
//        []       []
//        []       []
//        []       []

int main(void) {

  pixel_u ejemplo;

  ejemplo.dato1 = 31;

  ejemplo.dato2 = 90;

  printf("%d\n", ejemplo.dato1);
  printf("%f\n", ejemplo.dato2);

  return 0;
}
