#include <stdio.h>

enum semana{Lunes=10, Martes=12,
  Miercoles, Jueves,
  Viernes, Sabado, Domingo};

int main(void) {

  enum semana dia;

  dia = Miercoles;

  printf("%d\n", dia);

  return 0;
}
