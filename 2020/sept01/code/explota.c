#include <stdio.h>

void fun1();
void fun2();

int main(void)
{
  fun2();
  return 0;
}

void fun1() {
  printf("ASDAS\n");
}

void fun2() {
  fun1();
}


