#include <stdio.h>

int global; // No lo usamos todavía

int main(void) {

  //int local; // Esto si
  int numero = 1234; // 1230 + 4

  printf("%d\n", numero);

  int unidades;

  unidades = numero%10;

  printf("%d\n", unidades);

  float lo_que_queda;

  lo_que_queda = numero/10.;

  printf("%f\n", lo_que_queda);



  return 0;
}
