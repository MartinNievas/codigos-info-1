#include <stdio.h>
#include <time.h>


int main(void)
{
  time_t tiempo;    // Variable para almacenar el tiempo

  printf("%ld\n", time(NULL));

  // Para imprimir el tiempo como caracteres, hay que usar
  tiempo = time(NULL);
  printf("%s\n", ctime(&tiempo));

  return 0;
}
