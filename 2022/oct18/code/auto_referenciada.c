#include <stdio.h>


struct producto {
  float precio;
  char nombre[40];

  // struct producto taza; // ERROR
  struct producto *pproducto; // Si se puede
};

int main(void) {

  struct producto limpieza[10];


  return 0;
}
