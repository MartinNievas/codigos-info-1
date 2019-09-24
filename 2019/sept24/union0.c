#include <stdio.h>

union numero{
  int x;
  double y;
};

int main(void)
{
  union numero valor;

  valor.x = 100;

  printf("%s\n%s\n%s\n %d\n\n%s\n %f\n\n",
  "Poner un 100 en el miembro entero",
  "e imprimir ambos.",
  "int:", valor.x,
  "double:", valor.y);

  valor.y = 100.0; // put a double into the same union

  printf("%s\n%s\n%s\n %d\n\n%s\n %f\n",
  "Poner un 100 en el miembro double",
  "e imprimir ambos.",
  "int:", valor.x,
  "double:", valor.y);


  return 0;
}
