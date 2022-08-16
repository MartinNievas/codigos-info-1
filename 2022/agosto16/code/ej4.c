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

  int num1, num2;
  int aux1;
  printf("Ingrese dos números diferentes: ");
  scanf("%d %d", &num1, &num2);

  // Con variable auxiliar
  aux1 = ret_max(num1, num2);
  printf("El máximo es: %d\n", aux1);

  // Sin variable auxiliar
  printf("El máximo es: %d\n", ret_max(num1, num2));

  return 0;
}
