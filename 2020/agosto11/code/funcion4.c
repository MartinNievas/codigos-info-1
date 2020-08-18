#include <stdio.h>

int max(int, int);

int main(void)
{
  int num1;
  int num2;
  int mayor;

  printf("Ingrese dos números: ");
  scanf("%d %d", &num1, &num2);
  mayor = max(num1, num2);
  printf("El mayor es: %d\n", mayor);
  
  return 0;
}

int max(int x, int y){

  int max_val;

  if (x > y) 
  {
    max_val = x;
  }
  else 
  {
    max_val = y;
  }

  return max_val;
}

