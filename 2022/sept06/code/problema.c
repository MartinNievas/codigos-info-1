#include <stdio.h>

void swap(int* a, int* b)
{
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;
}

int main(void) {

  int num1 = 10;
  int num2 = 20;

  swap(&num1, &num2);
  printf("%d, %d\n", num1, num2);

  return 0;
}
