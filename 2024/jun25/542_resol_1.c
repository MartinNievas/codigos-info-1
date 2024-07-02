#include <stdio.h>

int main(int argc, char *argv[]) {
  int n=0;
  int a;
  printf("Ingrese un numero n: ");
  scanf("%d", &n);
  a=n;
  while(n<0){
    printf("El número debe ser positivo : ");
    scanf("%d", &n);
  }
  while(n>=0){
    printf("%d ", n);
    n--;
  }
  n=0;
  while(n<a){
    n++;
    printf("%d ", n);
  }

  return 0;
}
