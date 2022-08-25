#include <stdio.h>

int fibo(int a){

  if (a <= 1){
    return a;
  } else {
    int b = a - 1;
    int c = a - 2;
    return fibo(b) + fibo(c);
  }
}

int main(void) {

  int valor = 7;
  printf("%d\n", fibo(valor));

  return 0;
}
