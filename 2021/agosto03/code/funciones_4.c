#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Funciones sin parámetros con valor de retorno

int obtener_num_aleatorio(void)
{

  int num;
  srand(time(NULL));

  // Devolver un número aleatorio entre 0 y 10
  num = rand() % 11;

  return num;

}

int main(void) {

  printf("El número es: %d\n", obtener_num_aleatorio());

  return 0;
}
