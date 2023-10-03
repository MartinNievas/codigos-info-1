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
  int (*fun[2])(int a, int b) = { max, min};
  int resultado;
  int temp1 = 100;
  int temp2 = 300;

  resultado = fun[1](temp1, temp2);

  printf("El resultado es: %d\n", resultado);

  return 0;
}
