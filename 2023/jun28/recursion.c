#include <stdio.h>

double factorial( double num)
{
  if (num == 0 ){
    return 1;
  } else {
    return num*factorial(num-1);
  }
}

int main(void) {

  for (int i = 1; i < 172; i++){
    printf("%d: %lf\n", i, factorial(i));
  }

  return 0;
}
