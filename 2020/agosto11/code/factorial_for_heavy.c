#include <stdio.h>

int factorial(int);

int main(void)
{
  int num;

  for (num = 0; num < 20; num++)
    printf("%d! = %d\n", num, factorial(num));

  return 0;
}

int factorial(int number)
{
  if (number <= 1) {
    return 1;
  } else {
    return (number * factorial(number - 1));
  }
}

