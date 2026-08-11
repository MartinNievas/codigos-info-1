#include <stdio.h>

int main()
{
  int a = 0, b= 1, c=0;

  printf("ingrese un numero: ");
  scanf("%d",&a);

  for(int i = 1;i < a;i++)
  {

    b*=(1+i);
    printf("%d\n", b);

  }
  printf("%d es",b);
  return 0;
}
