// josé contrera 403145
// 32)
#include <stdio.h>

int main()
{   int num;
  printf("querido usuario ingrese un numero par positivo\n");
  scanf("%d",&num);

  while(num<0 || num%2!=0){
    if(num<=0){
      printf("el numero es negativo\n");
    }

    if(num%2!=0){
      printf("el numero es impar\n");
    }
    printf("ingrese otro numero\n");
    scanf("%d",&num);
  }
  printf("%d",num);

  return 0;
}
