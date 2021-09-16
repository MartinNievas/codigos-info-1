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

  void (*temp)(int a, int b);

  int op;
  int num1, num2;
  printf("Ingrese operación: ");
  scanf("%d", &op);

return 0;
}
