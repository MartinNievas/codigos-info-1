#include <stdio.h>
int main(void) {
  int num1, num2;
  printf("Ingrese un numero entero: ");
  scanf("%d", &num1);
  printf("Ingrese otro numero entero: ");
  scanf("%d", &num2);
  printf("Suma: %d\nResta: %d\nProducto: %d\nCociente: %d\nResto: %d", num1+num2, num1-num2, num1*num2, num1/num2, num1%num2);
  return 0;
}

