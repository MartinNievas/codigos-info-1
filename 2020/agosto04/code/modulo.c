#include <stdio.h>

int main(void)
{

  int i;

  for (i = 0; i < 17; i++){
    printf("%d: %d\n", i, i%16);
  }

  return 0;
}
