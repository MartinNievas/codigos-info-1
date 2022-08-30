#include <stdio.h>

int ret_max(int a, int b)
{
  return a>b?a:b;
}

int main(void) {

  int num1, num2, num3, num4;
  int max1, max2, max_global;
  printf("Ingrese números: ");
  scanf("%d %d %d %d", &num1, &num2, &num3, &num4 );

  max1 = ret_max(num1, num2);
  max2 = ret_max(num3, num4);
  max_global = ret_max(max1, max2);
  printf("El máximo es: %d\n", max_global);

  printf("El máximo es: %d\n", ret_max(
        ret_max(num1, num2),
        ret_max(num3,num4))
        );

  return 0;
}
