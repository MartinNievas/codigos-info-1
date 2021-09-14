#include <stdio.h>

void incrementar(int *var){

  (*var)++;

}

void incrementar2(int x){
    ++x;
}

int main(void) {

  int temp = 0;

  //incrementar(&temp);

  incrementar2(temp);

  printf("%d\n", temp);

  return 0;
}
