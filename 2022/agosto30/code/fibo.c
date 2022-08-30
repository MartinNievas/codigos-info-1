#include <stdio.h>

int fibo(int num)
{
  if (num == 0){
    return 0;
  }
  if (num == 1){
    return 1;
  } else {
    return fibo(num-1) + fibo(num-2);
  }
}

int main(void) {

  for (int i = 0; i < 10; i++){
    printf("%d\n", fibo(i));
  }

  return 0;
}
