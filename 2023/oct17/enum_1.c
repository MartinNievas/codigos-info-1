#include <stdio.h>

enum semana{Lunes, Martes, Miercoles, Jueves, Viernes, Sabado, Domingo};


int main(void) {

  enum semana dia;

  dia = Martes;

  printf("%d\n", dia);

  for (dia = Lunes; dia <= Domingo; dia++){
    printf("El día es: %d\n", dia);
  }

  return 0;
}
