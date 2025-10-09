#include <stdio.h>
#define TAM 2

struct producto_t {
  float precio;
  char nombre[100];
  int stock;
};

int main(void) {

  struct producto_t productos[TAM];

  return 0;
}
