#include <stdio.h>
// Plantilla C en Blanco

int main(void) {

  int num;
  scanf("%d", &num);

  int cifra1;
  int cifra2;

  cifra1 = num%10;
  cifra2 = num/10;

  printf("%d\n", cifra1);
  printf("%d\n", cifra2);

  return 0;
}
