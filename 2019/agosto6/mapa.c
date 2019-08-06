#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
  
  int celda;

  srand(time(NULL));
  
  for (int i = 1; i <= 100; i++)
  {
    celda = 1 + rand() % 4;
    switch(celda)
    {
    case 1:
      printf(" ");
    break;
    case 2:
      printf(" ");
    break;
    case 3:
      printf(" ");
    break;
    case 4:
      printf("#");
    break;
    default:    break;
    }

    if (i%10==0) 
      printf("\n");


  }

  return 0;
}


