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

  dia = Martes;

  printf("%d\n", dia);

  for (dia = Lunes; dia <= Domingo; dia++){
    printf("El día es: %s\n", dias_letras[dia]);
  }

  return 0;
}
