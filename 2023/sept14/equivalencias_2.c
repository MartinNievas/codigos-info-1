#include <stdio.h>
#define TAM 10

int main(void) {

  int arreglo[TAM] = {112,23,343,442};
  int *p;

  p = &arreglo[0];

  printf("Contenido en p+1: %d\n", *(p+1));


  // También podemos hacer:
  printf("Contenido en p[3]: %d\n", p[3]);


  return 0;
}

