#include <stdio.h>

int main(){

  unsigned int num = 0xAAAA;
  unsigned int mascara = 0x1 << 32;

  while (mascara >> 1){

    if (num & mascara){
      printf("1");
    } else {
      printf("0");
    }
  }

  return 0;
}

