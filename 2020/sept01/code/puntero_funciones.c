#include <stdio.h>

int max(int num1, int num2){
  int max;

  if (num1 > num2)
    max = num1;
  else
    max = num2;
  return max;
}

int min(int num1, int num2){
  int min = num2;

  if (num1 < num2)
    min = num1;

  return min;
}

int main(void)
{

  int (*fun)(int a, int b);
  int resultado;
  int temp1 = 100;
  int temp2 = 300;

  fun = max;

  resultado = fun(temp1, temp2);

  printf("El resultado es: %d\n", resultado);

  printf("max está en %p\n", min- max);




  return 0;
}
