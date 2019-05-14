#include <stdio.h>

int main(void)
{
  int temperatura = 20;

  if (temperatura > 30) 
  {
    printf("Encender aire\n");
  }

  if (temperatura <= 30) 
  {
    printf("Apagar aire\n");
  }

  return 0;
}
