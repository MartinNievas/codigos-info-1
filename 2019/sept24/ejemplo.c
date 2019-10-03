#include <stdio.h>

#define ENERO 1
#define FEBRERO 2
#define MARZO 3

struct alumno {
  int DNI;
  int legajo;
};

enum numeros{
  UNO = 1, DOS, TRES
};

int main(void)
{
  struct alumno persona;
  enum numeros num;

  printf("%d\n", UNO);
  printf("%d\n", TRES);

  
  return 0;
}
