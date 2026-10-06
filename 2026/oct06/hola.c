#include <stdio.h>

void hola2(int m){
  printf("Hola2! %d\n", m);
}

void hola1(int m){
  printf("Hola1! %d\n", m);

  hola2(m+1);
}


int main(void) {

  hola1(10);

  return 0;
}
