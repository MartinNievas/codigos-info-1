#include<stdio.h>
int main(void){
  int num1;
  int num2;
  printf("Ingresar primer numero: ");
  scanf("%d",&num1);
  printf("\nIngresar primer numero: ");
  scanf("%d",&num2);
  printf("\ncociente de %d y %d es %d\n",num1,num2,num1/num2);
  printf("producto de %d y %d es %d\n",num1,num2,num1*num2);
  printf("suma de %d y %d es %d\n",num1,num2,num1+num2);
  printf("resta de %d y %d es %d\n",num1,num2,num1-num2);
  return 0;
}
