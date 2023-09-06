#include <stdio.h>

void incrementa(int a)
{
  a++;
  printf("%d\n", a);
}

int main(void) {

  int temp = 10;
  printf("temp: %d\n", temp);
  incrementa(temp);
  printf("temp: %d\n", temp);

  return 0;
}
