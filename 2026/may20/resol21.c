#include <stdio.h>

int main(void) {

  int num;
  printf("Ingrese el número: ");
  scanf("%d", &num);

  printf("Si es divisible por 3 y 5 imprime 1\n");
  printf("Si ON es divisible por 3 y 5 imprime 0\n");

  printf("Resultado: %d\n", ((num%3)==0)  *  ((num%5)==0) );

  return 0;
}
