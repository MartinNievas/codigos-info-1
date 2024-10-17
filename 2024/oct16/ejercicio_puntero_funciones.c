#include <stdio.h>

void suma(int a, int b)
{
  printf("%d\n", a+b);
}

void resta(int a, int b)
{
  printf("%d\n", a-b);
}

// Completar: producto, cociente

int main(void)
{

  void (*puntero)(int, int);

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
