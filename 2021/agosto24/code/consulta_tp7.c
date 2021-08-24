#include <stdio.h>


int controlar(int a){

  static int centinela = 0;

  if(a == 0)
    centinela = 0;
  else
    centinela++;

  return centinela;
}

int main(void) {

  printf("%d\n", controlar(10));
  printf("%d\n", controlar(10));
  printf("%d\n", controlar(0));
  printf("%d\n", controlar(10));

  return 0;
}
