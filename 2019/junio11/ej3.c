#include <stdio.h>

int main(void)
{
  int a,b,c;


  printf("Ingrese a: ");
  scanf("%d", &a);
  printf("Ingrese b: ");
  scanf("%d", &b);
  printf("Ingrese c: ");
  scanf("%d", &c);


  if (a > b) 
  {
    if (a > c) 
    {
      printf("El mayor es a\n");
    }
    else 
    {
      printf("El mayor es c\n");
    }
  }
  else 
  {
    if (b > c) 
    {
      printf("El mayor es b\n");
    }
    else 
    {
      printf("El mayor es c\n");
    }
  }

  return 0;
}
