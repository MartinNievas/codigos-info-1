#include <stdio.h>

int factorial(int);

int main(void)
{
  int num = 4;

  printf("%d! = %d\n", num, factorial(num));

  return 0;
}

// Recursión
int factorial(int number)
{
  if (number <= 1) {
    return 1;
  } else {
    return (number * factorial(number - 1));
  }
}

