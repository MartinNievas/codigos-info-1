#include <stdio.h>

int main(void)
{
  int i;
  
  for (i = 1; i < 101; i++)
  {

    printf("%d \t", i);
    if (i % 10 == 0) 
      printf("\n");
    
  }

  return 0;
}
