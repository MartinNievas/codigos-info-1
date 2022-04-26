#include <stdio.h>

int main(void) {

  int num;

  num = 10;

  // Pre incremento
  printf("%d\n", ++num); //11
  printf("%d\n", num);

  int num2 = 10;
  printf("num 2: %d\n", num2++); // 10
  printf("num 2: %d\n", num2++); // 11
  printf("num 2: %d\n", num2);   // 12
  printf("num: %d num2: %d\n", num, num2);


  int num3 = 30;
  printf("num 3: %d\n", num3);
  printf("num 3: %d\n", num3+3);
  printf("num 3: %d\n", num3);

  return 0;
}
