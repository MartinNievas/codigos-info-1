#include <stdio.h>


int main(void) {

  int segundos;

  printf("Ingrese los segundos: ");
  scanf("%d", &segundos);

  int horas, minutos, seg;

  horas = segundos / 3600;

  minutos = (segundos % 3600) / 60;

  seg = (segundos % 3600 ) % 60;

  printf("%02d:%02d:%02d\n", horas, minutos, seg);

  return 0;
}
