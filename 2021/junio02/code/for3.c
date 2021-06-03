#include <stdio.h>
#include <limits.h>

int main(void) {

  char i; //-128,127

  i = 0;
  for ( ; i < 10 ; ){
    printf("%d\n", i);
    i++;
  }

  return 0;
}
