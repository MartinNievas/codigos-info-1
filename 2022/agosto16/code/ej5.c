#include <stdio.h>

int ret_max(int a, int b)
{
  int max;

  if (a > b){
    max = a;
  } else {
    max = b;
  }
  return max;
}

int main(void) {

  int num1, num2, num3, num4;
  printf("Ingrese dos números diferentes: ");
  scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

  // Con variables auxiliares
  int aux1, aux2, aux3;
  aux1 = ret_max(num1, num2);
  aux2 = ret_max(num3, num4);
  aux3 = ret_max(aux1, aux2);
  printf("El máximo es: %d\n", aux3);

  // Sin variables auxiliares
  printf("El máximo es: %d\n",ret_max(
        ret_max(num1,num2),
        ret_max(num3,num4))
      );

  return 0;
}

