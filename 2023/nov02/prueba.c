#include <stdio.h>

struct alumno {
  struct datos_pers {
    char nombre[10];
  } datos;
  float prom;
} ;

struct alumno variable_global;

int main(void) {

  struct alumno alu1 = {0};

  variable_global.prom = 100;

  printf("%s\n", alu1.datos.nombre);
  printf("%f\n", alu1.prom);

  return 0;
}
