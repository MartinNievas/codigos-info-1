//Axel Cordoba 411193
//5.31
#include<stdio.h>

int main(void){
  int num1 = -1;
  while(num1 < 0 || num1 > 100){
    printf("Ingrese un nùmero entre cero y cien: ");
    scanf("%d",&num1);
    if(num1 < 0 || num1 > 100)
      {
        printf("Alerta: El nùmero ingresado no es valido\n");
      }
  }
  return 0;
}
