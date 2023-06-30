#include <stdio.h>

int main(void) {
  int i;

  for ( i = 1; i < 100 ; i++){

    if( i == 50)
      break;

    if( i%3 != 0)
      continue;

    printf("%d\n", i);

  }

  printf("afuera del for: %d\n", i);

  return 0;
}
