#include <stdio.h>

int menor(int a, int b, int c)
{
  int resultado;
  if (a <= b && a <= c){
    resultado = a;
  } else if (b <= a && b <= c){
    resultado = b;
  } else if (c <= a && c <= b){
    resultado = c;
  }
  return resultado;
}

int main(void) {

  int num1 = 20, num2 = 30, num3 = 10;

  printf("%d\n", menor(num1, num2, num3));

  return 0;
}
