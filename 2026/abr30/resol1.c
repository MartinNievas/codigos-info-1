#include <stdio.h>

int main(void){
  int num1;
  int num2;

  // Alternativa
  // printf("Ingrese el primer número: ");
  // scanf("%d", &num1);
  // printf("Ingrese el segundo número: ");
  // scanf("%d", &num2);

  printf("imprime dos numero: ");
  scanf("%d%d",&num1,&num2);
  printf("\nel numero es:%d,%d",num1,num2);

  printf("\n la suma es: %d",num1+num2);
  printf("\nla resta es: %d",num1-num2);;
  printf("\nel producto es: %d",num1*num2);
  printf("\nel cociente es: %d",num1/num2);
  printf("\nel resto es: %d",num1%num2);
  return 0;
}

