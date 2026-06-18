
#include <stdio.h>

int main(int argc, char *argv[]) {
  int num, cifras=0,a=1;
  printf("ingrese un numero entero positivo\n");
  scanf("%d",&num);

  while(a != 0){
    a = num/10;
    cifras++;
    num = a;
  }
  printf("el numero ingresado tiene %d cifras",cifras);

  return 0;
}


