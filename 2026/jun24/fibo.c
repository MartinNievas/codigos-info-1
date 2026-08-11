#include <stdio.h>
int main()
{
  int a = 0, b= 1, max=0, tot = 0;
  printf("ingrese un numero: ");
  scanf("%d",&max);
  for(int i = 0;i < max;i++)
  {
    tot = a + b;
    a=b;
    b=tot;
    printf("%d\n",tot);
  }
  return 0;
}
