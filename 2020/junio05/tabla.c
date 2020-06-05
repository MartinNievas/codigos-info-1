#include <stdio.h>

int main(void)
{

  int i;

  for (i = 0; i < 25; i++){

    printf("%3d", i);

    if ( i%5 == 0 && i > 0)
      printf("\n");

  }

  return 0;
}
