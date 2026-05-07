#include <stdio.h>

#define DIAS_SEMANA 7
#define HORAS_DIA 24


int main(void) {

  DIAS_SEMANA = 30;
  printf("La semana tiene %d días\n", DIAS_SEMANA + 10);

  return 0;
}
