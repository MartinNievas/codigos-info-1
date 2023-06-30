// Definiciones de las funciones
#include"my_bib.h"
#include <stdio.h>

void saludo_1(void)
{
  printf("Saludo1\n");
}

void saludo_2(void)
{
  printf("Saludo2\n");
  saludo_1();
}
