#include <stdio.h>

int main()
{ int num;

  do{
    printf("ingrese un numero entre 0 y 100\n");
    scanf("%d",&num);

    if(num<=0 || num>=100)
      printf("alerta\n");

  }while(num<=0 || num>=100);

  printf("%d",num);
  return 0;
}
