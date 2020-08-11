#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{

  int r1, r2 ;
  int suma;
  int contador_veces_dos = 0;
  int i;

  srand(time(NULL));

  for (i = 0; i < 36000; i++){
    r1 = rand() % 4 + 1;
    r2 = rand() % 4 + 1;
    suma = r1 + r2;

    if (suma == 9)
      contador_veces_dos++;

  }

  printf("2: %d\n", contador_veces_dos);


  return 0;
}

