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

  if ( a > b && a > c ) 
    printf("El mayor es a\n");
  if ( b > a && b > c ) 
    printf("El mayor es b\n");
  if ( c > a && c > b ) 
    printf("El mayor es c\n");

  return 0;
}
