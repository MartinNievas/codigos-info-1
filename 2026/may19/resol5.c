#include <stdio.h>
//3.24
int main(void)
{
  int seg1,hor,min,seg2;

  printf("ingrese un catidad de segundos: ");
  scanf("%d",&seg1);

  hor = seg1/3600;
  min = (seg1%3600)/60;
  seg2 =seg1%3600%60/1;

  printf("hora,minuto,segundos: %02d:%02d:%02d", hor,min,seg2); 

  return 0;
}

