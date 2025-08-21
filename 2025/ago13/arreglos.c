#include<stdio.h>
int main(void)
{
  int arreglo[4];
  int i;

  for( i = 0; i < 4; i ++)
    arreglo[i] = i+1;

  for ( i = 0; i < 100; i ++)
    printf("El valor de arreglo[%d] es: %d \n",i ,arreglo [i]);
}
