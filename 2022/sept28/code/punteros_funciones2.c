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

  void (*puntero[2])(int, int) = {suma, resta};
  void (*temp)(int,int);

  int op;

  do{
    printf("Ingrese operación: \n");
    scanf("%d", &op);

    puntero[op](10,20);

    temp = puntero[0];
    puntero[0] = puntero[1];
    puntero[1] = temp;

  }while(1);

return 0;
}
