#include <stdio.h>

int main(void) {
  unsigned int i,num;
  unsigned int n = 1;

  printf("Ingrese un numero entero positivo");
  scanf("%u",&num);

  for(i=1; i<=num;i++){
    n= n*i;
  }
  printf("n!: %u\n",n);
  return 0;
}
