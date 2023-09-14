#include <stdio.h>
#define TAM 10

int main(void) {

  int arreglo[TAM] = {112,23,343,442};
  int *p;

  p = &arreglo[0];

  printf("Contenido del primer elemento: %d\n", arreglo[0]);
  printf("Contenido del primer elemento: %d\n", *p);

  p++;
  // Ahora el puntero apunta a:...
  printf("Contenido en p++: %d\n", *p);


  return 0;
}
