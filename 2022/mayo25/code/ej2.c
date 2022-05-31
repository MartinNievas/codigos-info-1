#include <stdio.h>

int main(void) {

  int num1, num2, num3;
  printf("Ingrese el número 1: ");
  scanf("%d", &num1);
  printf("Ingrese el número 2: ");
  scanf("%d", &num2);
  printf("Ingrese el número 3: ");
  scanf("%d", &num3);

  if (num1 == num2 && num1 == num3){
    printf("Los números son iguales\n");
  } else if (num1 >= num2 && num1 >= num3){
    printf("El primero es el mayor: %d\n", num1);
  } else if (num2 >= num1 && num2 >= num3){
    printf("El segundo es el mayor\n");
  } else if (num3 >= num1 && num3 >= num2)
    printf("El tercero es el mayor\n");


  return 0;
}
