#include <stdio.h>

int main(void)
{
  int a = 0x1;
  int b = 0xA;

  printf("Antes de la asignación:\na:%d\nb:%d\n",a ,b);

  printf("\nAsignación\n");
  a = b;
  printf("a:%d\tb:%d\n", a, b);

  printf("\nOperación a+=1\n");
  a +=1;
  printf("a:%d\tb:%d\n", a, b);

  printf("\nOperación a-=4\n");
  a -=4;
  printf("a:%d\tb:%d\n", a, b);

  printf("\nOperación a/=4\n");
  a /=4;
  printf("a:%d\tb:%d\n", a, b);

  printf("\nOperación a*=4\n");
  a *=4;
  printf("a:%d\tb:%d\n", a, b);

  printf("\nOperación a%=4\n");
  a %=4;
  printf("a:%d\tb:%d\n", a, b);

  return 0;
}
