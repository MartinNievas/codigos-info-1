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

  void (*operaciones[2])(int a, int b) = { suma, resta};
  void (*temp)(int a, int b);

  // 10+10-(10/20)

  int op;
  int num1, num2;
  printf("Ingrese operación: ");
  scanf("%d", &op);

  printf("Ingrese num1:");
  scanf("%d", &num1);
  printf("Ingrese num2:");
  scanf("%d", &num2);


  temp = operaciones[0];
  operaciones[0] = operaciones[1];
  operaciones[1] = temp;

  operaciones[op](num1,num2);

return 0;
}
