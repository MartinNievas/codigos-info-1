#include <stdio.h>
#include <limits.h>

int main(void) {

  char i;

  for ( i = 10; i > -10; i-=1){
    printf("%d ", i);
  }

  return 0;
}
