#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 10 10 10
//Funciones sin parámetros con valor de retorno

int obtener_num_aleatorio(void)
{

  int num;

  // Intervalo 23 - 100
  num = rand() % 78 + 23;

  return num;
}

int main(void) {

  int val;

  val = obtener_num_aleatorio();
  printf("El número es: %d\n", val);

  return 0;
}
