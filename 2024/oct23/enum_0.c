#include <stdio.h>

enum semana{Lunes = 10, Martes=20,
  Miercoles, Jueves,
  Viernes, Sabado, Domingo};

int main(void) {

  enum semana dia;

  dia = Lunes;

  printf("%d\n", dia);

  return 0;
}
