#include <stdio.h>

int main(void)
{
  int i = 0;

  printf("i: %d\n", i++);

  if (i == 0) 
  {
    printf("i vale cero\n");
  }
  else
  {
    printf("i NO vale cero\n");
  }
  
  return 0;
}
