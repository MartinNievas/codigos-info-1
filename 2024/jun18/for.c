#include <stdio.h>

int main(void) {

  for ( int i = 0; i < 10; ++i){
    for (int j = 0; j < 10; j++){
      printf("%d ", i+j);
    }
    printf("\n");
  }
  return 0;
}
