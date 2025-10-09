#include <stdio.h>

void saludo1(void)
{
  printf("Hola\n");
}

void saludo2(void)
{
  printf("Chau\n");
}

void saludo3(void)
{
  printf("Saludo 3\n");
}

void saludar( void(*funcion)(void) ){
  printf("Saludando...");
  funcion();
}


int main(void) {

  saludar(saludo2);

  return 0;
}
