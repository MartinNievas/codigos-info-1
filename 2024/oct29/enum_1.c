#include <stdio.h>

enum semana{Lunes, Martes, Miercoles, Jueves, Viernes, Sabado, Domingo};


int main(void) {

  enum semana dia;
  char* dias_letras[] = {
    "Lunes",
    "Martes",
    "Miercoles",
    "Jueves",
    "Viernes",
    "Sabado",
    "Domingo"
  };

  for (dia = Lunes; dia <= Jueves; dia++){
    printf("El día es: %s\n", dias_letras[dia]);
  }

  return 0;
}
