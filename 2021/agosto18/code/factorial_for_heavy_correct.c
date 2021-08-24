#include <stdio.h>

unsigned long long int factorial(unsigned int);

int main(void)
{
  unsigned int num;

  for (num = 0; num < 24; num++)
    printf("%u! = %llu\n", num, factorial(num));

  return 0;
}

unsigned long long int factorial(unsigned int number)
{
  if (number <= 1) {
    return 1;
  } else { 
    return (number * factorial(number - 1));
  }
}

