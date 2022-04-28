#include <stdio.h>

int main(void) {

  int num;

  num = 10;
  // Pre Incremento en una unidad
  printf("%d\n", num++);
  printf("%d\n", num);

  int num2 = 30;
  printf("num2: %d\n", ++num2);
  printf("num2: %d\n", num2);

  int num3 = -10;
  printf("num3: %d\n", num3--);
  printf("num3: %d\n", num3);


  return 0;
}
