#include <stdio.h>
#include <stdlib.h>
//Funciones sin parámetros con valor de retorno


int obtener_num_aleatorio()
{

  int num;

  num = 10;

  return num;

}

int main(void) {

  int valor;

  valor = obtener_num_aleatorio();

  printf("El número es: %d\n", valor);

  return 0;
}
