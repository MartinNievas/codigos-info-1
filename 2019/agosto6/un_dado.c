#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
  
  int face ;

  srand(time(NULL));
  
  for (int i = 1; i <= 100; i++)
  {
    face = 1 + rand() % 6;
    printf("%d ", face);
    if (i%10==0) 
      printf("\n");
  }

  return 0;
}


