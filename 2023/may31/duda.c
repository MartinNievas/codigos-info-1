#include <stdio.h>


int main(void) {

  int n1 = 10, n2 = 200;

  if(n1 > n2)
    printf("%d + %d = %d", n1, n2, n1+n2);
  else
    if(n1 < n2)
      printf("%d * %d = %d", n1, n2, n1*n2);
    else
      printf("Los numeros son iguales");

  return 0;
}
