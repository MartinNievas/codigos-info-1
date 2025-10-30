#include <stdio.h>


union num{
  int a[10];
  float f;
  char c;
};

int main(void) {

 union num numero;
 numero.c = 10;

 printf("%ld\n", sizeof(numero));
 printf("%.55f\n", numero.f);

  return 0;
}
