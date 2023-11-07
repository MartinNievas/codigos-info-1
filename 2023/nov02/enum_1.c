#include <stdio.h>
#define Lunes 0
#define Martes 1

enum semana{Lunes, Martes, Miercoles, Jueves, Viernes, Sabado, Domingo};


int main(void) {

  enum semana dia;
  char* dias_letras[] = {
    "Lo que quiera",
    "Martes",
    "asdasd",
    "Jueves",
    "Viernes",
    "Sabado",
    "Domingo"
  };

  dia = Jueves;

  printf("%d\n", dia);

  for (dia = Lunes; dia <= Domingo; dia++){
    printf("El día es: %s\n", dias_letras[dia]);
  }

  return 0;
}
