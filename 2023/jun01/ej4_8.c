#include <stdio.h>

int main(int argc, char *argv[]) {
  int num1;
  printf("Ingrese un número:");
  scanf("%d",&num1);

  if(100<=num1){
    if(num1<=999){
      printf("Su numero tiene tres cifras");
    }
  }

  if(num1 < 100){
    printf("su número no tiene 3 cifras"); 
  }
  if(num1 > 999){
    printf("su número no tiene 3 cifras"); 
  }
  return 0;
}
