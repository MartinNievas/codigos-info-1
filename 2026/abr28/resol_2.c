#include<stdio.h>

int main(void){
  float num1;
  float num2;

  printf("Ingresar primer número: ");
  scanf("%f",&num1);
  printf("\nIngresar segundo número: ");
  scanf("%f",&num2);

  printf("\ncociente de %f y %f es %f\n",num1,num2,num1/num2);
  printf("producto de %f y %f es %f\n",num1,num2,num1*num2);
  printf("suma de %f y %f es %f\n",num1,num2,num1+num2);
  printf("resta de %f y %f es %f\n",num1,num2,num1-num2);

  int num3, num4;

  num3 = num1;
  num4 = num2;

  printf("Resto: %d\n", num3%num4);

  return 0;
}
