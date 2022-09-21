#include <stdio.h>

void suma(int a, int b)
{
  printf("%d\n", a+b);
}

void resta(int a, int b)
{
  printf("%d\n", a-b);
}

int main(void)
{

  void (*puntero)(int, int);
  int contador = 0;
  puntero = resta;

  int op;
  printf("Ingrese operación: \n");
  scanf("%d", &op);

  switch(op){
  case 0:
    puntero = suma;
  break;
  case 1:
    puntero = resta;
  break;
  }

  puntero(1, 4);

return 0;
}
