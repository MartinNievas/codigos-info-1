#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// Implementar una función que imprima un número aleatorio
// entre -10 y 10 incluyendo los extremos

int obtener_num_aleatorio(void)
{
  return (-10 + rand()%21);
}

int main(void) {

  srand(time(NULL));

  printf("Número aleatorio: %d\n", obtener_num_aleatorio());

  return 0;
}
