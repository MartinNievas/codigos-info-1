#include <stdio.h>

// no se reserva
struct algo {
  int x;
};

typedef struct{
  int x;
}algo_t;

// Acá si
struct otra{
  int x;
}p2; // variable global
struct otra p3;

int main(void) {

  struct algo p1;

  return 0;
}
