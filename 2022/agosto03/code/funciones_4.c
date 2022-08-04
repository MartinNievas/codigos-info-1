#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Funciones sin parámetros con valor de retorno

int obtener_num_aleatorio(void)
{

  int num;
  scanf("%d", &num);

  return num;

}

int main(void) {

  printf("El número es: %d\n", obtener_num_aleatorio());

  return 0;
}
