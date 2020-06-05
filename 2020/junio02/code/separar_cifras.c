#include <stdio.h>

int main(void)
{

  int num;
  int c1, c2;
  int temp;

  printf("Ingresar el número: ");
  scanf("%d", &num);

  c1 = num%10;
  printf("c1 = %d\n", c1);

  temp = num/10;
  c2 = temp%10;

  printf("c2 = %d\n", c2);

  printf("%d%d\n", c1,c2);
  printf("%d%d\n", c2,c1);
  printf("%d\n", c2*10+c1);

  return 0;
}
